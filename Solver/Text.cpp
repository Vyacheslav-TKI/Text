#include "Text.h"
#include "Font.h"
#include "Color.h"
namespace rut::miit::text
{
	Text::Text(Point pos, std::string data, const Font font) : position(pos), text_data(data), text_font(font) {}

	static Text read_data(Point pos, std::string data, std::string font_name, Color color, int size)
	{
		Font font(font_name, color, size);
		return Text::Text(pos, data, font);
	}

	std::ostream& operator << (std::ostream& os, const Text& txt)
	{
		os << "Позиция: " << txt.position << "/n" << "Текст: " << txt.text_data << "/n" << "Шрифт: " << txt.text_font;
		return os;
	}
}