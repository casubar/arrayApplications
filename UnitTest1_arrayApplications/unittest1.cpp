#include "stdafx.h"
#include "CppUnitTest.h"
#include <vector>

#include "../arrayApplications/header_arrayApplications.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int test_list[] = { 45,56,2 };
//int test_list2[] = { 45,56,2,23,32,25,45,7 };





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
		TEST_METHOD(binarySearch) {
			Assert::AreEqual(check_search_binary(test_list, 56, 3), 2.0);
		}
		TEST_METHOD(vector_empty_store) {
			Assert::AreEqual(vector_empty_store_elements(), 1.0);
		}
		TEST_METHOD(vector_nonEmpty_store) {
			Assert::AreEqual(vector_nonEmpty_store_elements(), 1.0);
		}
			
	};
}