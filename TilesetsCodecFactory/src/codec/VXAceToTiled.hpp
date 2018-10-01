#pragma once
#include "Codec.hpp"

struct AutoTile
{
	int a;
	int b;
	int c;
	int d;
};

class VXAceToTiled : public Codec
{
	Q_OBJECT
public:
	Q_INVOKABLE explicit VXAceToTiled(QObject* parent = nullptr);

	QPixmap convert(const QPixmap& tileset, QRect logicalArea) override;
	bool validate(QRect logicalArea) override;

public:
	static int typeId;
	
private:
	static bool registred;
};