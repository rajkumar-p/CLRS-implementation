// 
//  merge_sort.hpp
//  merge_sort
//  
//  Created by raj.
//  Free as in free speech
//

#ifndef MERGE_SORT
#define MERGE_SORT

#include <vector>

// Interfaces
bool merge_sort(int *, size_t, size_t);
bool merge_sort(std::vector<int> &, size_t, size_t);
void merge_arrays(int *, size_t, size_t, size_t);
void merge_arrays(std::vector<int> &, size_t, size_t, size_t);

#endif /* MERGE_SORT */