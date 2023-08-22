#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
//funtion call itself
int fib(int n){
	if(n==1||n==0) return 1;
	return fib(n-1)+fib(n-2);
}

int32_t main() {
for(int i=1;i<=10;i++){
	cout<<fib(i)<<nl;
}

  return 0;
}