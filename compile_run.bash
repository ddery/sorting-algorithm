#!/bin/bash
g++ -o MergeSort MergeSort.cpp
g++ -o InsertionSort InsertionSort.cpp
g++ -o QuickSort QuickSort.cpp
g++ -o SelectionSort SelectionSort.cpp

# 1000
./MergeSort < rand_1000.in > sort_1000_MergeSort.out
./InsertionSort < rand_1000.in > sort_1000_nsertionSort.out
./QuickSort < rand_1000.in > sort_1000_QuicSort.out
./SelectionSort < rand_1000.in > sort_1000_SelectionSort.out

# 5000
./MergeSort < rand_5000.in > sort_5000_MergeSort.out
./InsertionSort < rand_5000.in > sort_5000_InsertionSort.out
./QuickSort < rand_5000.in > sort_5000_QuickSort.out
./SelectionSort < rand_5000.in > sort_5000_SelectionSort.out

# 10000
./MergeSort < rand_10000.in > sort_10000_MergeSort.out
./InsertionSort < rand_10000.in > sort_10000_InsertionSort.out
./QuickSort < rand_10000.in > sort_10000_QuickSort.out
./SelectionSort < rand_10000.in > sort_10000_SelectionSort.out

# 50000
./MergeSort < rand_50000.in > sort_50000_MergeSort.out
./InsertionSort < rand_50000.in > sort_50000_InsertionSort.out
./QuickSort < rand_50000.in > sort_50000_QuickSort.out
./SelectionSort < rand_50000.in > sort_50000_SelectionSort.out

# 100000
./MergeSort < rand_100000.in > sort_100000_MergeSort.out
./InsertionSort < rand_100000.in > sort_100000_InsertionSort.out
./QuickSort < rand_100000.in > sort_100000_QuickSort.out
./SelectionSort < rand_100000.in > sort_100000_SelectionSort.out

# 500000
./MergeSort < rand_500000.in > sort_500000_MergeSort.out
./InsertionSort < rand_500000.in > sort_500000_InsertionSort.out
./QuickSort < rand_500000.in > sort_500000_QuickSort.out
./SelectionSort < rand_500000.in > sort_500000_SelectionSort.out

# 1000000
./MergeSort < rand_1000000.in > sort_1000000_MergeSort.out
./InsertionSort < rand_1000000.in > sort_1000000_InsertionSort.out
./QuickSort < rand_1000000.in > sort_1000000_QuickSort.out
./SelectionSort < rand_1000000.in > sort_1000000_SelectionSort.out