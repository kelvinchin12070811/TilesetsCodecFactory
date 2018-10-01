#pragma once
#include <map>
#include <qpointer.h>
#include "Codec.hpp"

class CodecRegistra
{
public:
	static CodecRegistra& getInstance();

	const std::map<QString, QString> getCodecsList();
	bool registerCodec(std::pair<QString, QString> object);
private:
	std::map<QString, QString> codecsList;
private:
	CodecRegistra();
	~CodecRegistra();
};