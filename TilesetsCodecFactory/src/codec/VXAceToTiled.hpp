#pragma once
#include "Codec.hpp"

class VXAceToTiled : public Codec
{
	Q_OBJECT
public:
	Q_INVOKABLE explicit VXAceToTiled(QObject* parent = nullptr);

	void preview(const QPixmap& tileset, QRect logicalArea) override;
	void convert(const QPixmap& tileset, QRect logicalArea) override;
public:
	static int typeId;
	
private:
	QPixmap encodeTileset(const QPixmap& tileset, QRect logicalArea);
};