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
            operation op = operation();
            Assert::AreEqual('+', op.getInput());
		}

	};
}