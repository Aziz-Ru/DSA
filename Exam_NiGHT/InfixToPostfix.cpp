#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
class Stack{
private:
  char a[1000];
  int size=0;
public:
  void push(char val){
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
int precedence(char ch){
  if(ch=='+'||ch=='-') return 1;
  else if(ch=='*'||ch=='/') return 2;
  else return 3;
}

int main() {
 string s,res="";
 Stack st;
 cin>>s;

 for(int i=0;i<s.size();i++){
  char ch=s[i];
  if(ch>='a'&&ch<='z') res+=ch;
  else if(ch=='('){
    st.push(ch);
  }
  else if(ch==')'){
    while(st.top()!='('&&!st.empty()){
      res+=st.top();
      st.pop();
    }
    if(!st.empty()) st.pop();
  }
  else{
    while(!st.empty()&&precedence(ch)<=precedence(st.top())){
      res+=st.top();
      st.pop();
    }
    st.push(ch);
  }
 }
 while(!st.empty()){
  res+=st.top();
  st.pop();
 }
 cout<<res;
  return 0;
}