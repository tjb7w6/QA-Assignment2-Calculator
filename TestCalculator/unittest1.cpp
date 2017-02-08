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
			//because testing '+' output a positive result, we can make an assumptiopn that all inputs will be valid and begin refactoring
		}
		
		
	};
}