#!/bin/bash
g++ -o CekSort CekSort.cpp

# cek urut data acak
./CekSort < sort_1000_MergeSort.out
./CekSort < sort_5000_MergeSort.out
./CekSort < sort_10000_MergeSort.out
./CekSort < sort_50000_MergeSort.out
./CekSort < sort_100000_MergeSort.out
./CekSort < sort_500000_MergeSort.out
./CekSort < sort_1000000_MergeSort.out

./CekSort < sort_1000_InsertionSort.out
./CekSort < sort_5000_InsertionSort.out
./CekSort < sort_10000_InsertionSort.out
./CekSort < sort_50000_InsertionSort.out
./CekSort < sort_100000_InsertionSort.out
./CekSort < sort_500000_InsertionSort.out
./CekSort < sort_1000000_InsertionSort.out

./CekSort < sort_1000_QuickSort.out
./CekSort < sort_5000_QuickSort.out
./CekSort < sort_10000_QuickSort.out
./CekSort < sort_50000_QuickSort.out
./CekSort < sort_100000_QuickSort.out
./CekSort < sort_500000_QuickSort.out
./CekSort < sort_1000000_QuickSort.out

./CekSort < sort_1000_SelectionSort.out
./CekSort < sort_5000_SelectionSort.out
./CekSort < sort_10000_SelectionSort.out
./CekSort < sort_50000_SelectionSort.out
./CekSort < sort_100000_SelectionSort.out
./CekSort < sort_500000_SelectionSort.out
./CekSort < sort_1000000_SelectionSort.out