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
		* @brief �������� ������
		*/
		std::string font_name;

		/**
		* @brief ���� ������
		*/
		Color font_color;

		/**
		* @brief ������ ������
		*/
		size_t font_size;
	};
}
