#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	int random;
	cin >> N;
	cout << N << endl;
	srand(time(NULL));
	for(int i = 0; i < N; i++){
		cout << rand() % (N*1000) << endl;
	}
	return 0;
}