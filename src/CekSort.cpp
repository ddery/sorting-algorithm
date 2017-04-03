#include <bits/stdc++.h> 
using namespace std;

int main(){
	int x, prev;

	bool urut = true;	
	scanf("%d", &prev);
	while(scanf("%d", &x) && urut){
		if(prev > x) urut=false;
	}

	if(urut) cout << "TERURUT" << endl;
	else cout << "BELUM TERURUT" << endl;
	return 0;
}