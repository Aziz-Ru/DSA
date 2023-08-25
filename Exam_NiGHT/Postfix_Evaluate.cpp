#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Stack{
private:
  int a[1000];
  int size=0;
public:
  void push(int val){
    size++;
    a[size]=val;
  }
  void pop(){
    size-=1;
  }
  int top(){
    return a[size];
  }
  bool empty(){
    return size==0;
  }
};


int32_t main() {
 string s;
 cin>>s;
 Stack q;
 for(int i=0;i<s.size();i++){
  if(s[i]>='0'&&s[i]<='9'){
   q.push(s[i]-'0');
  }
  else{
    int x=q.top();
    q.pop();
    int y=q.top();
    q.pop();
    if(s[i]=='+'){
      q.push(x+y);
    }
    else if(s[i]=='-'){
      q.push(y-x);
    }
    else if(s[i]=='*'){
      q.push(y*x);
    }
    else if(s[i]=='/'){
      q.push(y/x);
    }
  }
 }
 cout<<q.top();
  return 0;
}