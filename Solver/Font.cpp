#include "Font.h"
#include "Color.h"
#include <string>

namespace rut::miit::text
{
	Font::Font()
	{
		this->font_name = "None";
		this->font_color = Color();
		this->font_size = 1;
	}

	Font::Font(std::string name, const Color& color1, int size)
	{
		if (size <= 0)
		{
			throw std::logic_error("Размер шрифта должен быть неотрицательным!");
		}

		this->font_name = name;
		this->font_color = color1;
		this->font_size = static_cast<size_t>(size);
	}

	std::ostream& operator << (std::ostream& os, const Font& fnt)
	{
		os << fnt.font_name << ":" << fnt.font_color << ":" << fnt.font_size;
		return os;
	}
}