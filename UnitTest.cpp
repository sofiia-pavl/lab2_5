#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2-5/Triad.h"
#include "C:\Users\Софія\source\repos\lab2-5\lab2-5\Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad a;
			bool j = a.Init(2, 6, 4);
			Assert::AreEqual(j, true);
		}
	};
}
