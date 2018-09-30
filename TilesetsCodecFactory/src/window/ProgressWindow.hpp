#pragma once
#include <memory>
#include <QDialog>
#include "ui_ProgressWindow.h"

class ProgressWindow : public QDialog
{
	Q_OBJECT

public:
	explicit ProgressWindow(const QString& title, QWidget *parent = Q_NULLPTR);
	~ProgressWindow();

public slots:
	void setValue(int value);

private:
	std::unique_ptr<Ui::ProgressWindow> ui;
};
