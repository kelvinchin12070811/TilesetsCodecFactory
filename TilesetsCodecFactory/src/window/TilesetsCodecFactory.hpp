#pragma once
#include <memory>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qpixmap.h>
#include <QtWidgets/QMainWindow>
#include <qpointer.h>
#include "ui_TilesetsCodecFactory.h"

class TilesetsCodecFactory : public QMainWindow
{
	Q_OBJECT

public:
	TilesetsCodecFactory(QWidget *parent = Q_NULLPTR);

private:
	void connectItems();

private slots:
	void loadTilesets();
	void previewTileset();

private:
	QPixmap previewImage;
	std::unique_ptr<Ui::TilesetsCodecFactoryClass> ui;
	QPointer<QGraphicsScene> gScene{ nullptr };
};
