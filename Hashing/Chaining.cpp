#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class HashTable{
private: 
    //table size
    int TBsize;
    vector<list<int>>HTable;
    int hashFuntion(int key){
        return key%TBsize;
    }
public:
    HashTable(int size){
        TBsize=size;
        HTable.resize(size);
    }
    void insert(int key){
        int ind=hashFuntion(key);
        HTable[ind].push_back(key);
    }
    bool search(int key){
        int ind=hashFuntion(key);
        for(auto val:HTable[ind]){
            if(val==key) return true;

        }
        return false;
    }
    void display(){
        for(int i=0;i<TBsize;i++){
            cout<<"NUmber "<<i<<':';
            for(auto x:HTable[i]) 
                cout<<x<<' ';
            cout<<nl;
        }
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
 ht.display();

  return 0;
}