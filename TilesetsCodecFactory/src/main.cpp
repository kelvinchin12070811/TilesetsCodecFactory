#include "window/TilesetsCodecFactory.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QApplication a(argc, argv);
	TilesetsCodecFactory w;
	w.show();
	return a.exec();
}
