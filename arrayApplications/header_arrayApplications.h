#pragma once
#include<vector>

const int ROW_SIZE = 5;
const int COL_SIZE = 3;



// display list
void disp_list(int list[], int listSize);


// ********** S O R T I N G ****************

// ------ BUBBLE SORT
void sort_bubble(int list[], int listSize);
// check bubble sort
double check_bubble_sort(int list[], int listSize);

// ------ SELECTION SORT
void sort_select(int list[], int listSize);
// check selection sort
double check_selection_sort(int list[], int listSize);

// ------ INSERTION SORT
void sort_insert(int list[], int listSize);
// check insertion sort
double check_insertion_sort(int list[], int listSize);


// ********** S E A R C H I N G ****************
// ------ SEQUENTIAL / LINEAR SEARCH
int seqSearch(const int myList[][COL_SIZE], int numOfRows, int numToSearch, int colToSearch);
// ------ BINARY SEARCH
int search_binary(const int list[], int listsize, int searchItem);
// check binary search
double check_search_binary(int list[], int searchItem, int listSize);
// execute search
void execute_search(int list[], int listSize);


// ********** V E C T O R   T Y P E****************
// store elements to  an empty vector 
double vector_empty_store_elements();
// store elements to a non-empty vector 
double vector_nonEmpty_store_elements();
// display contents of the vector 
void disp_vectList(std::vector <int> vectList);
