#include <array>
#include <map>
#include <qfiledialog.h>
#include "CodecRegistra.hpp"
#include "VXAceToTiled.hpp"

VXAceToTiled::VXAceToTiled(QObject* parent):
	Codec(parent)
{
}

QPixmap VXAceToTiled::convert(const QPixmap& tileset, QRect logicalArea)
{
	QPixmap result;
	std::map<QPoint, std::array<AutoTile, 6>> tile;
	for (int y = 0; y < logicalArea.height(); y += (32 * 3))
	{
		for (int x = logicalArea.x(); x < logicalArea.width(); x += (32 * 2))
		{
			
		}
	}

	return result;
}

bool VXAceToTiled::validate(QRect logicalArea)
{
	if (logicalArea.width() % (32 * 2) != 0 || logicalArea.height() % (32 * 3) != 0)
		return false;

	return true;
}

int VXAceToTiled::typeId = qRegisterMetaType<VXAceToTiled*>();
bool VXAceToTiled::registred = CodecRegistra::getInstance().registerCodec({ "VX Ace to Tiled", QMetaType::typeName(VXAceToTiled::typeId) });