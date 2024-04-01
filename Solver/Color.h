#pragma once
#include <stdint.h>
#include <ostream>
namespace rut::miit::text
{
	/**
	* @brief ����� ����
	*/
	class Color
	{
	public:
		Color();

		Color(int r, int g, int b);

		friend std::ostream& operator << (std::ostream& os, const Color& clr);
	private:
		/**
		* @brief ������� ����
		*/
		uint8_t red;

		/**
		* @brief ����� ����
		*/
		uint8_t blue;

		/**
		* @brief ������� ����
		*/
		uint8_t green;
	};
	

}
