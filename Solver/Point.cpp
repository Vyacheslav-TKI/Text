#include "Point.h"
#include <cmath>
#include <limits>
using namespace rut::miit::text;

bool rut::miit::text::operator==(const Point& left_point, const Point& right_point)
{
	return (std::abs(left_point.x - right_point.x) <= std::numeric_limits<double>::epsilon() &&
		std::abs(left_point.y - right_point.y) <= std::numeric_limits<double>::epsilon());
}

bool rut::miit::text::operator!=(const Point& left_point, const Point& right_point)
{
	return !(left_point == right_point);
}

rut::miit::text::Point::Point(const double x, const double y)
	:x{ x }, y{ y }
{
}

std::ostream& operator << (std::ostream& os, const Point& point)
{
	os << point.x << ":" << point.y;
	return os;
}