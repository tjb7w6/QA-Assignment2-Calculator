#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Calculator/Calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestCalculator
{		
	TEST_CLASS(TestCalculator)
	{
	public:
		
		TEST_METHOD(TestOperationPlus)
		{
			mainClass main = mainClass();
			Assert::AreEqual('+', main.getCharInput()); 
		}
		
		TEST_METHOD(TestNumberInput)
		{
			mainClass main = mainClass();
			Assert::AreEqual(1.5, main.getNumInput());
			//because testing 1.5 output a positive result, we can make an assumption that all inputs will be valid
		}

		TEST_METHOD(TestAddition)
		{
			mainClass main = mainClass();
			addition plus = addition();
			Assert::AreEqual(4.0, plus.add(main.getNumInput(), main.getNumInput()));
		}
	};
}