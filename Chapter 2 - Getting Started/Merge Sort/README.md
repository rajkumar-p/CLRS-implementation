# Merge Sort

## Overview
Merge sort is a divide  sorting algorithm which runs in the order of O(n lg n)

## Details
The algorithm is implemented using C++. The interface (.hpp) & the implemetation (.cpp) files to the algorithm is provided in the corresponding folder.

## Input and Output 

A sample input can be:  
3  
34  
2  
22

The output for the above input (after running the algorithm) would be:  
2  
3  
22  
34  

## How to run
You can drop the interface & implementation files into your current directory or one of the pre-defined include directories and start using the methods defined. 

Your program might look something like this:

    #include "merge_sort.hpp"
	#include <iostream>

	using namespace std;
	
	int main (int argc, char const *argv[])
	{
		int a[6] = {5, 2, 4, 6, 1, 3};
		
		merge_sort(a, 0, 6);
		
		// Print the array
		for(size_t i = 0; i < 6; ++i)
		{
			cout <<a[i]<<"\t";
		}
		cout <<endl;
		
		vector<int> b;
		b.push_back(5);
		b.push_back(2);
		b.push_back(4);
		b.push_back(6);
		b.push_back(1);
		b.push_back(3);
		
		merge_sort(b, 0, b.size());
		
		// Print the vector
		for(size_t i = 0; i < 6; ++i)
		{
			cout <<b[i]<<"\t";
		}
		cout <<endl;
		
		return 0;
	}


## Links
Selection Sort - <http://en.wikipedia.org/wiki/Merge_sort>