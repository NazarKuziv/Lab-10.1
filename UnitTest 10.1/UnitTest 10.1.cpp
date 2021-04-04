#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101
{
	TEST_CLASS(UnitTest101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = "JKNGSQHJN";

			Assert::AreEqual(Search_SQ_Or_QS(str), true);
		}
	};
}
