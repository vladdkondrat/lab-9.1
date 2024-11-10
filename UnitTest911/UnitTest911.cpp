#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 9.1/lab 9.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest911
{
	TEST_CLASS(UnitTest911)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 1.0;
			n = 1; a = 1.0;
			dod();
			Assert::AreEqual(1.0, a, 1e-9);
			n = 2;
			dod();
			Assert::AreEqual(0.5, a, 1e-9);
			n = 3; 
			dod();
			Assert::AreEqual(1.0 / 6.0, a, 1e-9);
		}
	};
}
