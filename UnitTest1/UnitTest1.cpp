#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3i/6.3i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* first = nullptr, * last = nullptr;
			enqueue(first, last, 1);
			enqueue(first, last, 1);
			enqueue(first, last, 23);
			enqueue(first, last, 47);
			enqueue(first, last, 22);
			Assert::IsTrue(check(first));

		}
	};
}
