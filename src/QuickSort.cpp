#include <bits/stdc++.h>
using namespace std;

void Partisi(int* A, int i, int j, int* k){
	int mid = (i + j)/2;
	int P = A[mid];
	int p = i, q = j;
	do {
		while(A[p] < P) p++;
		while(A[q] > P) q--;
		if(p < q){
			if(p == mid) mid = q;
			else if (q == mid) mid = p;
			swap(A[p], A[q]);
			if(p != mid) p++;
			if(q != mid) q--;
		}
	} while (p < q);
	*k = q;
}

void QuickSort(int* A, int i, int j) {
	if(i < j){
		int k;
		Partisi(A, i, j, &k);
		QuickSort(A, i, k-1);
		QuickSort(A, k+1, j);
	}
}

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i = 0; i < N; i++){
		cin >> A[i];
	}
	clock_t tStart = clock();
	QuickSort(A, 0,N-1);
	double time_taken = (double)(clock() - tStart)/CLOCKS_PER_SEC;
	for(int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
	printf("\nTime taken: %.6fs\n", time_taken);
	return 0;
}