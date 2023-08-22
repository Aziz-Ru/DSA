#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int HashSize=10;
//Hashing is fastest searching technique that search o(1)

int Hash_Key(int value){
//A hash function that returns a unique hash number is called a universal hash function
return value%HashSize;
}

int main() {
 
 int Hash[HashSize];
 
 for(int i=1;i<=10;i++){
 	Hash[Hash_Key(i)]=i;
 }
 for(int i=0;i<=10;i++){
 	cout<<Hash[i]<<" ";
 }
 //what happend collusion

  return 0;
}