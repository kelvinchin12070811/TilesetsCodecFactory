#include <qfiledialog.h>
#include <qmessagebox.h>
#include "TilesetsCodecFactory.hpp"

TilesetsCodecFactory::TilesetsCodecFactory(QWidget *parent)
	: QMainWindow(parent)
{
	ui = std::make_unique<Ui::TilesetsCodecFactoryClass>();
	ui->setupUi(this);

	gScene = new QGraphicsScene(this);
	ui->previewPanel->setScene(gScene);
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