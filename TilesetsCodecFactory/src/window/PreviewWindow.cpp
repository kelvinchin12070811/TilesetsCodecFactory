#include "PreviewWindow.hpp"

PreviewWindow::PreviewWindow(QWidget *parent)
	: QWidget(parent)
{
	ui = std::make_unique<Ui::PreviewWindow>();
	ui->setupUi(this);

	gScene = new QGraphicsScene(this);
	ui->graphicsView->setScene(gScene);
}

PreviewWindow::~PreviewWindow()
{
}

void PreviewWindow::setPreviewImage(QPixmap image)
{
	this->image = std::move(image);

	gScene->clear();
	gScene->addItem(new QGraphicsPixmapItem(image));
}
