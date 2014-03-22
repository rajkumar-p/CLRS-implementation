// 
//  selection_sort.cpp
//  selection_sort
//  
//  Created by raj.
//  Free as in free speech
//

#include "selection_sort.hpp"
#include <vector>
#include <algorithm>

using namespace std;

/*
	method:  selection_sort
	params:  pointer_to_an_array, size
	returns: bool
*/
bool selection_sort(int *numbers, size_t n)
{
	int min_index;
	
	// During each iteration, select the smallest number and swap
	for (size_t i = 0; i <  (n-1); ++i) {
		min_index = distance(numbers, min_element(numbers + i, numbers + n));
		swap(numbers[i], numbers[min_index]);
	}
	
	return true;
}

/*
	method:  selection_sort
	params:  vector_of_an_int
	returns: bool
*/
bool selection_sort(vector<int> &numbers)
{
	// Get the size and cache it
	size_t n = numbers.size();
	int min_index;
	
	// During each iteration, select the smallest number and swap
	for (size_t i = 0; i <  (n-1); ++i) {
		min_index = distance(numbers.begin(), min_element(numbers.begin() + i, numbers.end()));
		swap(numbers[i], numbers[min_index]);
	}
	
	return true;
}