#include "stdafx.h"
#include <iostream>

double test_sum (int a, int b) {
	return a + b;
}


// display list
void disp_list(int list[], int listSize) {
	for (int index = 0; index < listSize; index++) {
		std::cout << list[index] << " ";
	}
}


// ***************** S O R T I N G ****************
/*both bubble sort and selection
sort make approximately 500,000 key comparisons, which is quite high*/

// ------ BUBBLE SORT
void sort_bubble(int list[], int listSize) {
	// iteration to traverse elements
	for (int iteration = 1; iteration < listSize; iteration++) { 
		// compare elements then swap
		for (int index = 0; index < listSize - iteration; index++) {
			if (list[index] > list[index + 1]) {
				// swap elements
				std::swap(list[index], list[index + 1]);
			}
		}
	}
}

// check bubble sort
double check_bubble_sort(int list[], int listSize) {
	// execute bubble sort
	sort_bubble(list, listSize);
	if (list[0] == 2) {
		if (list[1] == 45) {
			if (list[2] == 56) {
				return 1;
			}
		}
	}	
	return 99;
	
}

// ------ SELECTION SORT
void sort_select(int list[], int listSize) {
	int smallestIndex, temp;

	// locate the smallest element from list[0]...list[length-1]
	for (int index = 0; index < listSize - 1; index++) {
		smallestIndex = index; // assume list[0] is the smallest

		// locate the smallest element from list[1]...list[length-1]
		for (int location = index + 1; location < listSize; location++) { 
			if (list[location] < list[smallestIndex]) { 
				// update samllestIndex
				smallestIndex = location;
			}
		}
		
		// swaps the contents/element of list[smallestIndex] with list[index]
		temp = list[smallestIndex];
		list[smallestIndex] = list[index];
		list[index] = temp;
	}	
}

// check selection sort
double check_selection_sort(int list[], int listSize) {
	// execute selection sort
	sort_select(list, listSize);
	if (list[0] == 2) {
		if (list[1] == 45) {
			if (list[2] == 56) {
				return 1;
			}
		}
	}
	return 99;
}


// ------ INSERTION SORT
void sort_insert(int list[], int listSize) {
	int temp, location;

	temp = 0;
	location = 0;

	// traverse the list
	// variable firstOutOfOrder to point to the first element in the unsorted sublist
	// firstOutOfOrder is initialized to 1
	for (int firstOutOfOrder = 1; firstOutOfOrder < listSize; firstOutOfOrder++) {		
		// look for the smallest element
		if (list[firstOutOfOrder] < list[firstOutOfOrder - 1]) {			
			// copy list[firstOutOfOrder] into temp
			temp = list[firstOutOfOrder];
			// record location of the firstOutOfOrder
			location = firstOutOfOrder;

			// move the lowest element to its proper location
			// swap elements of the small element and the big element
			do {
				// a.copy list[location - 1] into list[location]
				list[location] = list[location - 1];
				// b.decrement location by 1 to consider the next element in the sorted portion of the array
				location--;

				/*while location > 0 && the element in the upper list at
				location - 1 is greater than temp*/
			} while (location > 00 && list[location - 1] > temp);		
			// copy temp into list[location]
			list[location] = temp;
		}
	}
}

// check insertion sort
double check_insertion_sort(int list[], int listSize) {
	sort_insert(list, listSize);
	if (list[0] == 2) {
		if (list[1] == 45) {
			if (list[2] == 56) {
				return 1;
			}
		}
	}
	else {
		return 99;
	}
}