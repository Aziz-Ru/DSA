#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void TowerOfHanoi(int n,int from,int to,int aux){
	if(n==0) return ;
	TowerOfHanoi(n-1,from,aux,to);
	cout<<from<<" "<<to<<nl;
	TowerOfHanoi(n-1,aux,to,from);
	
}

int32_t main() {
	int n; cin>>n;
	cout<<(1<<n) -1<<'\n';
TowerOfHanoi(n,1,2,3);
  return 0;
}