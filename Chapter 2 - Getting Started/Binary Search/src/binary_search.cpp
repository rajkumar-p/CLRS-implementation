// 
//  binary_search.cpp
//  binary_search
//  >> Implementation of the binary search algorithm
// 
//  Created by raj.
//  Free as in free speech
// 

#include "binary_search.hpp"

int binary_search(int *numbers, int key, int start, int end)
{
	if(!(start <= end))
		return -1;
		
	int middle = ((unsigned int) start + (unsigned int) end) >> 1;
	
	if (numbers[middle] == key)
		return middle;
	else if (key < numbers[middle])
	 	return binary_search(numbers, key, start, middle - 1);
	else
	 	return binary_search(numbers, key, middle + 1, end);
	
}
