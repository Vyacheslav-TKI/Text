#pragma once
#include <ostream>
namespace rut::miit::text
{
	/**
	* @brief ����� �����.
	*/
	struct Point
	{
		/**
		* @brief ��������.
		*/
		double x;

		/**
		* @brief ��������.
		*/
		double y;

		Point(const double x = 0, const double y = 0);

	};

	bool operator==(const Point& left_point, const Point& right_point);
	bool operator!=(const Point& left_point, const Point& right_point);
	std::ostream& operator << (std::ostream& os, const Point& point);
}