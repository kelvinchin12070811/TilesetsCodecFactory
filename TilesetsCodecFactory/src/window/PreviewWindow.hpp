#pragma once
#include <memory>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qpixmap.h>
#include <qpointer.h>
#include <QWidget>
#include "ui_PreviewWindow.h"

class PreviewWindow : public QWidget
{
	Q_OBJECT

public:
	PreviewWindow(QWidget *parent = Q_NULLPTR);
	~PreviewWindow();

	void setPreviewImage(QPixmap image);
private:
	std::unique_ptr<Ui::PreviewWindow> ui;
	QPixmap image;
	QPointer<QGraphicsScene> gScene{ nullptr };
};
