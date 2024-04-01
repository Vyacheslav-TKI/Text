#pragma once
namespace rut::miit::text
{
	/**
	* @brief Класс Точка.
	*/
	struct Point
	{
		/**
		* @brief Абсцисса.
		*/
		double x;

		/**
		* @brief Ордината.
		*/
		double y;

		Point(const double x = 0, const double y = 0);

	};

	bool operator==(const Point& point1, const Point& point2);
	bool operator!=(const Point& point1, const Point& point2);
}