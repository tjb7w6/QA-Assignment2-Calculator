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

		TEST_METHOD(TestMultiplication)
		{
			mainClass main = mainClass();
			multiplication star = multiplication();
			Assert::AreEqual(9.0, star.multiply(main.getNumInput(), 3));
		}

		TEST_METHOD(TestDivision)
		{
			mainClass main = mainClass();
			division slash = division();
			Assert::AreEqual(1.0, slash.divide(main.getNumInput(), 3.0));
		}
	};
}