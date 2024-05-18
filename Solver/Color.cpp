#include "Color.h"
#include <stdint.h>
#include <ostream>

namespace rut::miit::text
{
	Color::Color() :
		red{ 0 }, blue{ 0 }, green{ 0 }
	{
	}
	Color::Color(int r, int g, int b)
	{
		setlocale(LC_ALL, "Russian");
		if (r * g * b < 0)
		{
			throw std::logic_error("Величины цвета должны быть неотрицательными!");
		}
		else if (r > 255 || g > 255 || b > 255)
		{
			throw std::logic_error("Величины цвета должны быть строго меньше 256!");
		}

		red = static_cast<uint8_t>(r);
		green = static_cast<uint8_t>(g);
		blue = static_cast<uint8_t>(b);
	}
	std::ostream& operator << (std::ostream& os, const Color& clr)
	{
		os << static_cast<int>(clr.red) << ":" << static_cast<int>(clr.green) << ":" << static_cast<int>(clr.blue);
		return os;
	}
}