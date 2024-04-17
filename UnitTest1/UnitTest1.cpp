#include "pch.h"
#include "CppUnitTest.h"
#include "..\Application\Application.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
https://github.com/jason-zeng-sys/HW8/blob/master/UnitTest1/UnitTest1.cpp
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			CoolClass coolClass;
			Assert::AreEqual(3, coolClass.Calc(1, 2000));
		}

		TEST_METHOD(TestMethod2)
		{

			CoolClass coolClass;
			Assert::AreEqual(5, coolClass.Calc(3, 2));
		}
	};
}
