#include <qfiledialog.h>
#include "src/window/PreviewWindow.hpp"
#include "VXAceToTiled.hpp"

VXAceToTiled::VXAceToTiled(QObject* parent):
	Codec(parent)
{
}

void VXAceToTiled::preview(const QPixmap& tileset, QRect logicalArea)
{
	auto previewWin = std::make_unique<PreviewWindow>();
	previewWin->setPreviewImage(encodeTileset(tileset, logicalArea));
	previewWin->show();
}

void VXAceToTiled::convert(const QPixmap& tileset, QRect logicalArea)
{
}

QPixmap VXAceToTiled::encodeTileset(const QPixmap & tileset, QRect logicalArea)
{
	QPixmap result;
	result = tileset;
	return result;
}

int VXAceToTiled::typeId = qRegisterMetaType<VXAceToTiled*>();