#pragma once
#include "Font.h"
namespace rut::miit::text
{
	class Text
	{
	public:
		Text(std::string data, const Font& font1);

		static void read_data();

		friend std::ostream& operator << (std::ostream& os, const Text& txt);

		std::string to_string();
	private:
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

