#include "CodecRegistra.hpp"

CodecRegistra & CodecRegistra::getInstance()
{
	static CodecRegistra instance;
	return instance;
}

const std::map<QString, QString> CodecRegistra::getCodecsList()
{
	return codecsList;
}

bool CodecRegistra::registerCodec(std::pair<QString, QString> object)
{
	auto result = codecsList.insert(std::move(object)).second;
	return result;
}

CodecRegistra::CodecRegistra()
{
}


CodecRegistra::~CodecRegistra()
{
}
