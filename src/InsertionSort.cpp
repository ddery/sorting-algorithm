#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int* A, int i, int j){
	while(i<j){
		int k = i+1;
		while(A[k] < A[k-1] && (k > 0)){
			swap(A[k], A[k-1]);
			k--;
		}
		i++;
	}
}

int main() {
	int N;
	cin >> N;
	int A[N];
	for(int i = 0; i < N; i++){
		cin >> A[i];
	}
	clock_t tStart = clock();
	InsertionSort(A, 0,N-1);
	double time_taken = (double)(clock() - tStart)/CLOCKS_PER_SEC;
	for(int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
	printf("\nTime taken: %.6fs\n", time_taken);
	return 0;
}