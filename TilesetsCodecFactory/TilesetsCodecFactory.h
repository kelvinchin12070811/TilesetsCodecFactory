#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TilesetsCodecFactory.h"

class TilesetsCodecFactory : public QMainWindow
{
	Q_OBJECT

public:
	TilesetsCodecFactory(QWidget *parent = Q_NULLPTR);

private:
	Ui::TilesetsCodecFactoryClass ui;
};
