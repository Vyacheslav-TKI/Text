#include "Font.h"
#include "Color.h"
#include <string>

namespace rut::miit::text
{
	Font::Font()
	{
		font_name = "None";
		font_color = Color();
		font_size = 1;
	}

	Font::Font(std::string name, const Color& color, int size)
	{
		if (size <= 0)
		{
			throw std::logic_error("Размер шрифта должен быть неотрицательным!");
		}

		font_name = name;
		font_color = color;
		font_size = static_cast<size_t>(size);
	}

	std::ostream& operator << (std::ostream& os, const Font& fnt)
	{
		os << fnt.font_name << ":" << fnt.font_color << ":" << fnt.font_size;
		return os;
	}
}