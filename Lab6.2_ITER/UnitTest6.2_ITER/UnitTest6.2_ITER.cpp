#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2_ITER/Lab6.2_ITER.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62ITER
{
	TEST_CLASS(UnitTest62ITER)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5 }; 
			int count = 0; 
			countA(arr, 5, count); 

			Assert::AreEqual(count, 3); 
		}
	};
}
