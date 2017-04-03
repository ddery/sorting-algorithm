#include <bits/stdc++.h>
using namespace std;

void Merge(int* A, int left, int mid, int right){
	int ATemp[right-left+1];
	int it1 = left, it2 = mid+1, it = 0;
	while(it1 <= mid || it2 <= right){
		if (it1 > mid){ // salin sisa array kanan
			while (it2 <= right) ATemp[it++] = A[it2++];
			break;
		}
		if (it2 > right){ // salin sisa array kiri
			while (it1 <= mid) ATemp[it++] = A[it1++];
			break;
		}
		if((A[it1] < A[it2]))
			ATemp[it++] = A[it1++];
		else
			ATemp[it++] = A[it2++];
	}

	// salin kembali ke A
	it = 0;
	for(int i = left; i <= right; i++, it++)
		A[i] = ATemp[it];
}
void MergeSort(int* A, int i, int j){
	if(i<j) {
		int mid = (i + j)/2;
		MergeSort(A, i, mid);
		MergeSort(A, mid + 1, j);
		Merge(A, i, mid, j);
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
	MergeSort(A, 0,N-1);
	double time_taken = (double)(clock() - tStart)/CLOCKS_PER_SEC;
	for(int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
	printf("\nTime taken: %.6fs\n", time_taken);
	return 0;
}