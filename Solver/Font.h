#pragma once
#include <string>
#include "Color.h"

namespace rut::miit::text
{
	class Font
	{
	public:
		Font();

		Font(std::string name, const Color& color, int size);

		friend std::ostream& operator << (std::ostream& os, const Font& fnt);
	private:
		/**
		* @brief Название шрифта
		*/
		std::string font_name;

		/**
		* @brief Цвет шрифта
		*/
		Color font_color;

		/**
		* @brief Размер шрифта
		*/
		size_t font_size;
	};
}
