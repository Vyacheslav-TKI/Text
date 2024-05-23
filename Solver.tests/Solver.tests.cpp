#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "..\Solver\Point.h"
#include "..\Solver\Color.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TextTests
{
	TEST_CLASS(Solvertests)
	{
	public:
		
		TEST_METHOD(operator_equal_equal)
		{
			int a = 1;
			int b = 2;
			rut::miit::text::Point first(a, b);
			rut::miit::text::Point second(a, b);
			Assert::IsTrue(first == second);
		}

		TEST_METHOD(operator_not_equal)
		{
			rut::miit::text::Point first(1, 0);
			rut::miit::text::Point second(0, 1);
			Assert::IsTrue(first != second);
		}
	};
}
