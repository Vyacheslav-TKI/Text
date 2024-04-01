#pragma once
#include <stdint.h>
#include <ostream>
namespace rut::miit::text
{
	/**
	* @brief Класс Цвет
	*/
	class Color
	{
	public:
		Color();

		Color(int r, int g, int b);

		friend std::ostream& operator << (std::ostream& os, const Color& clr);
	private:
		/**
		* @brief Красный цвет
		*/
		uint8_t red;

		/**
		* @brief Синий цвет
		*/
		uint8_t blue;

		/**
		* @brief Зеленый цвет
		*/
		uint8_t green;
	};
	

}
