#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
class HashTable{
private:
    int tableSize;
    vector<int> hashTable;
    int hashFunction(int key){
        return key%tableSize;
    }

public:
    HashTable(int size){
        tableSize=size;
        hashTable.resize(size,-1);
    }
    void insert(int key){
        int c1=1;
        int c2=3;
        int i=0;
        int ind=hashFunction(key);

        while(hashTable[ind]!=-1){
            cout<<ind<<' ';
            ind=hashFunction(ind+c1*i+c2*i*i);
            i++;
        }
        hashTable[ind]=key;
    }
    bool search(int key){
        int c1=1;
        int c2=3;
        int i=0;
        int ind=hashFunction(key);
         while(hashTable[ind]!=-1){
            if(hashTable[ind]==key) 
                return true;
            ind=hashFunction(ind+c1*i+c2*i*i);
            i++;
        }
        return false;
    }
    
};

int32_t main() {
int n,Hsize,Sitem;
 cout<<"Enter size of Hash array Size: ";
 cin>>Hsize;
 cout<<"\n Enter Number of elements:";
 cin>>n;

 HashTable ht(Hsize);
 for(int i=0;i<n;i++) {
    int x; cin>>x;
    ht.insert(x);
 }

 cout<<"\n Enter Your Search Item:";
 cin>>Sitem;
 
 if( ht.search(Sitem)) cout<<"Found it";
 else cout<<"Not Found";
 
  return 0;
}