#pragma once
#include "Font.h"
#include "Point.h"
namespace rut::miit::text
{
	class Text
	{
	public:
		Text(Point pos, std::string data, const Font font);

		static void read_data();

		friend std::ostream& operator << (std::ostream& os, const Text& txt);
	private:
		/**
		* @brief Позиция текста в "пространстве"
		*/
		Point position;

		/**
		* @brief Непосредственно текст
		*/
		std::string text_data;

		/**
		* @brief Шрифт текста
		*/
		Font text_font;
	};
}

