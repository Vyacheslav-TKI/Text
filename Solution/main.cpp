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

		rut::miit::text::Text::read_data(); // статический вывод

		rut::miit::text::Text text(position, "ZA WARUDO!", font); // обычный конструктор

		std::cout << text << std::endl;
	}
	catch (const std::logic_error& e)
	{
		std::cerr << "Программа выполнена с ошибкой: " << e.what() << std::endl;
	}

		return 0;
}