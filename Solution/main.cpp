#include <iostream>
#include "..\Solver\Color.h"
#include "..\Solver\Text.h"
#include "..\Solver\Font.h"
#include "..\Solver\Point.h"

/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
int main()
{
	setlocale(LC_ALL, "Russian");
	try {
		rut::miit::text::Color text_color(255, 0, 0);
		rut::miit::text::Font font("Times new roman", text_color, 14);
		rut::miit::text::Point position{ 10, 100 };
		rut::miit::text::Text text = rut::miit::text::Text::read_data(position, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.", "Times new roman", text_color, 14);
		std::cout << text << std::endl;
	}
	catch (const std::logic_error& e)
	{
		std::cerr << "Программа выполнена с ошибкой: " << e.what() << std::endl;
	}

		return 0;
}