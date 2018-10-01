#include <qfiledialog.h>
#include <qmessagebox.h>
#include "src/codec/CodecRegistra.hpp"
#include "src/window/PreviewWindow.hpp"
#include "TilesetsCodecFactory.hpp"

TilesetsCodecFactory::TilesetsCodecFactory(QWidget *parent)
	: QMainWindow(parent)
{
	ui = std::make_unique<Ui::TilesetsCodecFactoryClass>();
	ui->setupUi(this);

	gScene = new QGraphicsScene(this);
	ui->previewPanel->setScene(gScene);

	for (auto itr : CodecRegistra::getInstance().getCodecsList())
		ui->codecList->addItem(itr.first);

	connectItems();
}

void TilesetsCodecFactory::connectItems()
{
	//Actions
	connect(ui->actionAbout, &QAction::triggered, [this]() {
		QMessageBox::about(this, "about " + this->windowTitle(),
			tr("Tilesets codec factory by kelvin chin"));
	});
	connect(ui->actionAbout_Qt, &QAction::triggered, [this]() { QMessageBox::aboutQt(this, "About Qt"); });
	connect(ui->actionClose, &QAction::triggered, [this]() { this->close(); });

	//Widgets
	connect(ui->browseTilesetBtn, &QPushButton::clicked, [this]() {
		auto fileName = QFileDialog::getOpenFileName(this, tr("Open"), QString(), "PNG file (*.png)");
		if (!fileName.isEmpty())
			this->ui->tilesetFileName->setText(fileName);
	});
	connect(ui->loadBtn, &QPushButton::clicked, this, &TilesetsCodecFactory::loadTilesets);
	connect(ui->previewBtn, &QPushButton::clicked, this, &TilesetsCodecFactory::previewTileset);
}

void TilesetsCodecFactory::previewTileset()
{
	if (previewImage.isNull())
	{
		QMessageBox::critical(this, this->windowTitle(), tr("cannot run preview while no tileset are loaded"));
		return;
	}
	auto strList = ui->dimEdit->text().split(QRegularExpression("X|x"), QString::SplitBehavior::SkipEmptyParts);
	QRect rect{ strList[0].toInt(), strList[1].toInt(), strList[2].toInt(), strList[3].toInt() };

	auto codecName = CodecRegistra::getInstance().getCodecsList().at(ui->codecList->currentText());
	auto previewWinMeta = QMetaType::type(codecName.toStdString().c_str());
	auto metaObj = QMetaType::metaObjectForType(previewWinMeta);
	std::shared_ptr<Codec> codecInstance(qobject_cast<Codec*>(metaObj->newInstance()), [&](Codec* instance) {
		QMetaType::destroy(previewWinMeta, instance);
	});

	if (!codecInstance->validate(rect))
	{
		QMessageBox::critical(this, this->windowTitle(), tr("tileset scheme does not matched up"));
		return;
	}

	QPointer<PreviewWindow> previewWin = new PreviewWindow();
	previewWin->setAttribute(Qt::WA_DeleteOnClose);
	previewWin->setPreviewImage(codecInstance->convert(previewImage, rect));
	previewWin->show();
}

void TilesetsCodecFactory::loadTilesets()
{
	QString fileName = ui->tilesetFileName->text();
	if (fileName.isEmpty()) return;

	previewImage.load(fileName);
	
	gScene->clear();
	gScene->addItem(new QGraphicsPixmapItem(previewImage));

	QString dimStr = "%1x%2x%3x%4";
	dimStr = dimStr.arg(0).arg(0).arg(previewImage.width()).arg(previewImage.height());
	ui->dimEdit->setText(dimStr);
}