#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class MaxHeap{
private:
  int a[1000];
  int size=0;

  void Heapify(int index){
   while(index>0){
    int parent =(index-1)/2;
       if(a[index]<a[parent]){
      swap(a[index],a[parent]);
      index=parent;     
    }
    else break;
  }
}

public:
void insert(int val){
 a[size]=val;
 Heapify(size);
 size+=1;
}
void display(){
  for(int i=0;i<size;i++){
    cout<<a[i]<<' ';
  }
}
};

int32_t main() {
 MaxHeap mh;
mh.insert(1);
mh.insert(2);
mh.insert(2);
mh.insert(4);
mh.insert(5);
mh.insert(6);
mh.display();
  return 0;
}