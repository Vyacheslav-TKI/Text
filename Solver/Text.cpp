#include "Text.h"
#include "Font.h"
#include "Color.h"
#include <iostream>
namespace rut::miit::text
{
	Text::Text(Point pos, std::string data, const Font font) : position(pos), text_data(data), text_font(font) {}

	void Text::read_data()
	{
		std::string input;
		std::cout << "Введите текст: ";
		std::getline(std::cin, input);
		std::cout << "Выведенный текст: " << input << std::endl;
	}

	std::ostream& operator << (std::ostream& os, const Text& txt)
	{
		os << "Позиция: " << txt.position << "/n" << "Текст: " << txt.text_data << "/n" << "Шрифт: " << txt.text_font;
		return os;
	}
}