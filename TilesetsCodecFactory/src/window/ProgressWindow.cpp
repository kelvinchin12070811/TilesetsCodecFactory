#include "ProgressWindow.hpp"

ProgressWindow::ProgressWindow(const QString& title, QWidget *parent)
	: QDialog(parent)
{
	ui = std::make_unique<Ui::ProgressWindow>();
	ui->setupUi(this);

	this->setWindowTitle(title);
}

ProgressWindow::~ProgressWindow()
{
}

void ProgressWindow::setValue(int value)
{
	ui->progressBar->setValue(value);
}