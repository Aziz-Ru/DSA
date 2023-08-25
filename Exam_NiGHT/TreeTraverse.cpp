#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
class Tree{
public:
  int a[1000]={0};
  
  void insert(int val,int pos=1){
    if(a[pos]==0){
      a[pos]=val;
      return;
    }
    if(a[pos]>val){
         insert(val,pos*2);
    }
    else insert(val,pos*2+1);
  }
  
  void inorder(int index=1){
    if(a[index]){
      inorder(2*index);
      cout<<a[index]<<' ';
      inorder(2*index+1);
    }
  }
  void preorder(int index=1){
    if(a[index]){
      cout<<a[index]<<' ';
      inorder(2*index);
      
      inorder(2*index+1);
    }
  }
  void postorder(int index=1){
    if(a[index]){
      inorder(2*index);
      inorder(2*index+1);
      cout<<a[index]<<' ';
    }
  }



};

int main() {
Tree t;
t.insert(4);
t.insert(6);
t.insert(2);
t.insert(3);
t.insert(5);
t.inorder();
cout<<nl;
t.preorder();
cout<<nl;
t.postorder();


  return 0;
}