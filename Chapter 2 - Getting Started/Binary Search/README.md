# Binary Search

## Overview
Binary Search is a divide and conquer algorithm which runs in the order of O(lg n)

## Implementation Details
The algorithm is implemented using C++. The interface (.hpp) & the implemetation (.cpp) files to the algorithm is provided in the corresponding folder. The algorithm does not check if the array is already sorted. The client is reponsible for passing in an sorted array. The program returns the first index (starting from 0) if the given key is found in the array. If the key is not found, it returns -1

## Input and Output 

A sample input can be:  
3  
34  
2  
22  

And suppose the key is 34, the algorithm returns 1 (zero index based). Now, if the key is 39, the algorithm returns -1

## How to run
You can drop the interface & implementation files into your current directory or one of the pre-defined include directories and start using the methods defined. 

Your program might look something like this:

    #include "binary_search.hpp"
	#include <iostream>

	using namespace std;
	
	int main (int argc, char const *argv[])
	{
		int a[] = {7, 12, 14, 22, 27, 41, 97};
		
		cout <<binary_search(a, 98, 0, 6)<<endl;
		
		return 0;
	}


## Links
Insertion Sort - <http://en.wikipedia.org/wiki/Binary_search>