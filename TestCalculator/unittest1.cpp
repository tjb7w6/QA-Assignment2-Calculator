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
			Assert::AreEqual(3.0, main.getNumInput());
		}

		TEST_METHOD(TestAddition)
		{
			mainClass main = mainClass();
			addition plus = addition();
			Assert::AreEqual(6.0, plus.add(main.getNumInput(), main.getNumInput()));
		}

		TEST_METHOD(TestSubtraction)
		{
			mainClass main = mainClass();
			subtraction minus = subtraction();
			Assert::AreEqual(1.0, minus.subtract(main.getNumInput(), 2.0));
		}
	};
}