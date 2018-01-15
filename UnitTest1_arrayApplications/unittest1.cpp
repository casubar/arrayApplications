#include "stdafx.h"
#include "CppUnitTest.h"
#include "../arrayApplications/header_arrayApplications.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1_arrayApplications
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(check_sum)
		{
			Assert::AreEqual(test_sum(2.0, 3.0), 5.0);
		}

	};
}