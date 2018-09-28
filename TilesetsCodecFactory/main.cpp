#include "TilesetsCodecFactory.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TilesetsCodecFactory w;
	w.show();
	return a.exec();
}
