#include "stdafx.h"
#include "CppUnitTest.h"
#include "../arrayApplications/header_arrayApplications.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int test_list[] = { 45,56,2 };






namespace UnitTest1_arrayApplications
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(bubbleSort) {
			Assert::AreEqual(check_bubble_sort(test_list, 3), 1.0);
		}
		TEST_METHOD(selectionSort) {
			Assert::AreEqual(check_selection_sort(test_list, 3), 1.0);
		}
		TEST_METHOD(insertionSort) {
			Assert::AreEqual(check_insertion_sort(test_list, 3), 1.0);
		}
			
	};
}