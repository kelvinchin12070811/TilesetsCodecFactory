#pragma once
#include <qobject.h>
#include <qpixmap.h>
#include <qrect.h>

class Codec : public QObject
{
	Q_OBJECT
public:
	virtual void preview(const QPixmap& tileset, QRect logicalArea) = 0 {}
	virtual void convert(const QPixmap& tileset, QRect logicalArea) = 0 {}
	virtual ~Codec() = 0 {}
	Codec(QObject* parent = nullptr) :
		QObject(parent)
	{
	}
};