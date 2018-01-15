// arrayApplications.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "header_arrayApplications.h"

int main()
{
	double total;

	total = test_sum(2, 3);
	std::cout << total;
	std::cin >> total;
	
    return 0;
}

