#pragma once
#include <stdint.h>
#include <ostream>
namespace rut::miit::text
{
	/**
	* @brief  ласс ÷вет
	*/
	class Color
	{
	public:
		Color();

		Color(int r, int g, int b);

		friend std::ostream& operator << (std::ostream& os, const Color& clr);
	private:
		/**
		* @brief  расный цвет
		*/
		uint8_t red;

		/**
		* @brief —иний цвет
		*/
		uint8_t blue;

		/**
		* @brief «еленый цвет
		*/
		uint8_t green;
	};
	

}
