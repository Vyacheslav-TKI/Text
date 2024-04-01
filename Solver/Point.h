#pragma once
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

	bool operator==(const Point& point1, const Point& point2);
	bool operator!=(const Point& point1, const Point& point2);
}