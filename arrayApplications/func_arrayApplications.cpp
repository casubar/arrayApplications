#include "stdafx.h"
#include <iostream>
#include <vector>


const int ROW_SIZE = 5;
const int COL_SIZE = 3;



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


// ********** S E A R C H I N G ****************
// ------ SEQUENTIAL / LINEAR SEARCH
// to apply search, the list must be sorted
int seqSearch(const int myList[][COL_SIZE], int numOfRows, int numToSearch, int colToSearch) {
	bool found;
	int loc;

	found = false;
	loc = 0;
	while (loc < numOfRows && !found) {
		if (myList[loc][colToSearch] == numToSearch) {
			found = true;
		}
		else {
			loc++;
		}
	}
	if (found) {
		return loc;
	}
	else {
		return -1;
	}
}


// ------ BINARY SEARCH
/*binary search is much faster than a sequential search....to apply a binary
search, the list must be sorted.*/

int search_binary(const int list[], int listsize, int searchItem) {
	int first, last, mid;
	bool found;

	found = false;
	first = 0;
	mid = 0;
	last = listsize - 1;

	while (first <=last && !found) {
		mid = (first + last) / 2;
		if (list[mid] == searchItem) {
			found = true;
		}
		else if (list[mid] > searchItem) {
			last = mid - 1;
		}
		else {
			first = mid + 1;
		}
	}
	if (found) {
		return mid;
	}
	else {
		return 99;
	}
}

// check binary search
double check_search_binary(int list[], int searchItem, int listSize) {
	int itemLoc;
	
	// sort list
	sort_insert(list, listSize);
	// execute binary search
	itemLoc = search_binary(list, listSize, searchItem);
	return itemLoc;
}

// execute search
void execute_search(int list[], int listSize) {
	int searchNum, numLoc;

	sort_insert(list, listSize);
	std::cout << "Enter number to search: ";
	std::cin >> searchNum;
	numLoc = search_binary(list, listSize, searchNum);
	// display sorted list
	std::cout << "The sorted list:" << std::endl;	
	disp_list(list, listSize);
	std::cout << std::endl;
	if (numLoc == 99) {
		std::cout << "Number not found!!!";
		std::cout << std::endl;
	}
	else {
		std::cout << "The number is located at index " << numLoc + 1 << std::endl;
	}
}


// ********** V E C T O R   T Y P E ****************
// store elements to an empty vector 
double vector_empty_store_elements() {
	std::vector <int> vectList; // vector object with empty size
	for (unsigned int i = 3; i > vectList.size(); i--) {
		vectList.push_back(1 + i);		
	}

	if (vectList[0] == 4) {
		if (vectList[1] == 3) {
			return 1;
		}
	}
	else {
		return 99;
	}
}

// store elements to a non-empty vector 
double vector_nonEmpty_store_elements() {
	std::vector <int> vectList(3); // vector object with size 3

	for (unsigned int i = 0; i < vectList.size(); i++) {
		vectList[i] = i * 2;
	}

	if (vectList[0] == 0) {
		if (vectList[1] == 2) {
			return 1;
		}
	}
	else {
		return 99;
	}
}


// display contents of the vector 
void disp_vectList(std::vector <int> vectList) {
	for (unsigned int i = 0; i < vectList.size(); i++) {
		std::cout << vectList[i] << " ";
	}
}
