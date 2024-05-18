#include <iostream>
#include "C:\Users\User\source\repos\Text\Solver\Text.h"
#include "C:\Users\User\source\repos\Text\Solver\Color.h"
#include "C:\Users\User\source\repos\Text\Solver\Font.h"
#include "C:\Users\User\source\repos\Text\Solver\Point.h"

/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
namespace rut::miit::text
{
	int main()
	{
		setlocale(LC_ALL, "Russian");
		try {
			Color text_color(255, 0, 0);
			Font font("Times new roman", text_color, 14);
			Point position{ 10, 100 };
			Text text = Text::read_data(position, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.", "Times new roman", text_color, 14);
			std::cout << text << std::endl;
		}
		catch (const std::logic_error& e)
		{
			std::cerr << "Программа выполнена с ошибкой: " << e.what() << std::endl;
		}

		return 0;
	}
}