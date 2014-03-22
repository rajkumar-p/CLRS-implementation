// 
//  merge_sort.cpp
//  merge_sort
//  
//  Created by raj.
//  Free as in free speech
//

#include "merge_sort.hpp"
#include <vector>
#include <algorithm>

using namespace std;

/*
	method:  merge_arrays
	params:  pointer_to_an_int, int, int, int
	returns: void
*/
void merge_arrays(int *numbers, size_t p, size_t q, size_t r)
{
	// Arrays to hold the left & right sub arrays
	int x = q - p + 1;
	int y = r - q;
	int left[x];
	int right[y];
	
	// Copy the elements p..q to vector left
	copy(numbers + p, numbers + (q + 1), left);
	// Copy the elements q+1..r to the vector right
	copy(numbers + (q + 1), numbers + (r + 1), right);
	
	// Merge the vectors left & right to the numbers vector
	merge(left, left + x, right, right + y, numbers + p);
}

/*
	method:  merge_arrays
	params:  ref_to_vector_int, int, int, int
	returns: void
*/
void merge_arrays(vector<int> &numbers, size_t p, size_t q, size_t r)
{
	// Vectors to hold the left & right sub arrays
	vector<long> left(q - p + 1);
	vector<long> right(r - q);
    
	// Copy the elements p..q to vector left
	copy(numbers.begin() + p, numbers.begin() + (q + 1), left.begin());
	// Copy the elements q+1..r to the vector right
	copy(numbers.begin() + (q + 1), numbers.begin() + (r + 1), right.begin());
    
	// Merge the vectors left & right to the numbers vector
	merge(left.begin(), left.end(), right.begin(), right.end(), numbers.begin() + p);
}

/*
	method:  merge_sort
	params:  pointer_to_int, int, int, int
	returns: bool
*/
bool merge_sort(int *numbers, size_t p, size_t r)
{
	// Divide the numbers into two parts
	int q;
	if (p < r) {
        q = ((unsigned int) p + (unsigned int) r) >> 1;
		// Left sub-problem
		merge_sort(numbers, p, q);
		// Right sub-problem
		merge_sort(numbers, q+1, r);
		// Merge both the right & left sub-problem
		merge_arrays(numbers, p, q, r);
	}
	
	return true;
}

/*
	method:  merge_sort
	params:  ref_to_vector_int, int, int, int
	returns: bool
*/
bool merge_sort(vector<int> &numbers, size_t p, size_t r)
{
	// Divide the numbers into two parts
	int q;
	if (p < r) {
        q = ((unsigned int) p + (unsigned int) r) >> 1;
		// Left sub-problem
		merge_sort(numbers, p, q);
		// Right sub-problem
		merge_sort(numbers, q+1, r);
		// Merge both the right & left sub-problem
		merge_arrays(numbers, p, q, r);
	}
	
	return true;
}