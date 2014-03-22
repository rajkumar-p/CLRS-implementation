// 
//  insertion_sort.cpp
//  insertion_sort
//  
//  Created by raj.
//  Free as in free speech
// 

#include "insertion_sort.hpp"
#include <vector>

using namespace std;

/*
	method:  insertion_sort
	params:  pointer_to_an_array, size
	returns: bool
*/
bool insertion_sort(int *numbers, unsigned int n)
{
	// Variables def
	int j;
	int key;

	// Insertion sort loop
	for (size_t i = 1; i < n; ++i) {
		j = i - 1;
		key = numbers[i];
		// Move all the elements to the right if they are greater than key
		while (j >= 0 && numbers[j] > key) {
			numbers[j+1] = numbers[j];
			--j;
		}

		// Insert the current element in the right place
		numbers[j+1] = key;
	}
	
	// Return true if success
	return true;
}


/*
	method:  insertion_sort
	params:  vector_of_an_int
	returns: bool
*/
bool insertion_sort(vector<int> &numbers)
{
	// Variables def
	int j;
	long key;

	// Get the size of the vector
	size_t count = numbers.size();

	// Insertion sort loop
	for (size_t i = 1; i < count; ++i) {
		j = i - 1;
		key = numbers[i];
		// Move all the elements to the right if they are greater than key
		while (j >= 0 && numbers[j] > key) {
			numbers[j+1] = numbers[j];
			--j;
		}

		// Insert the current element in the right place
		numbers[j+1] = key;
	}
	
	// Return true if success
	return true;
}