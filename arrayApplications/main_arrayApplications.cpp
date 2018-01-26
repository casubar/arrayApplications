// arrayApplications.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "header_arrayApplications.h"

const int SIZE = 8;


int main()
{
	int main_list[] = { 45,56,2,23,32,25,45,7 };

	double total;
	char cont;
	int choyz, checkVect;


	// -----------------------
	std::cout << "The List: " << std::endl;
	disp_list(main_list, SIZE);
	std::cout << std::endl << std::endl;
	
	do {
		std::cout << std::endl;
		std::cout << "------ M E N U ------" << std::endl;
		std::cout << "[1] Bubble Sort" << std::endl;
		std::cout << "[2] Selection Sort" << std::endl;
		std::cout << "[3] Insertion Sort" << std::endl;
		std::cout << "[4] Search from the list" << std::endl;
		std::cout << "[5] Vector" << std::endl;
		std::cout << "[0] E X I T" << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choyz;
		std::cout << std::endl;

		switch (choyz) {
		case 1: {
			std::cout << " Bubble Sort" << std::endl;
			sort_bubble(main_list, SIZE);
			disp_list(main_list, SIZE);
			break;
		}
		case 2: {
			std::cout << "Selection Sort" << std::endl;
			sort_select(main_list, SIZE);
			disp_list(main_list, SIZE);
			break;
		}
		case 3: {
			std::cout << "Insertion Sort" << std::endl;
			sort_insert(main_list, SIZE);
			disp_list(main_list, SIZE);
			break;
		}
		case 4: { // search item from the sorted list
			execute_search(main_list, SIZE);
			break;
		}
		case 5: { // vector pass by reference and pass by value
			std::vector <int> main_vectList;
			std::cout << "--==Vector Contents==--" << std::endl;
			
			vect_store_passBy_reference(main_vectList, SIZE);//pass by reference
			std::cout << "vector pass by reference" << std::endl;
			disp_vectList(main_vectList);
			
			std::cout << std::endl;
			std::cout << "vector pass by value" << std::endl;
			vect_passBy_value(main_vectList, 5); // pass by value

			std::cout << std::endl;
			vect_multiD();
			
			break;
		}
		case 0: {
			return 0;
		}
		default:
			break;
		}
		std::cout << std::endl << std::endl << std::endl;
		std::cout << "C-O-N-T-I-N-U-E  <y/n> ==>  ";
		std::cin >> cont;
	} while (cont == 'Y' || cont == 'y');


}

