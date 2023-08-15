#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'


class Stack{
private:
  int size;
  char arr[1000];
public:
  Stack(){
    size=0;
  }

  void push(char data){
      size++;
      arr[size]=data;
     
  }
  void pop(){
    arr[size]=0;
    size--;
  }
  char top(){
    return arr[size];
  }
  bool empty(){
    if(size==0){
      return true;
    }
    return false;
  }

};
  int sign(char c){
  if(c=='+'||c=='-') return 1;
  else if(c=='*'||c=='/') return 2;
  else if(c == '^') return 3;
  else return -1;
}



void solve(){
  //postfix writes the operator after the operands
string s,res="";
cin>>s;
//cout<<s<<' ';
Stack sc;
for(int i=0;i<s.size();i++){
  char c=s[i];

  if((c>='a'&&c<='z')||(c>='0'&&c<='9')) res+=c;
  else if(c=='(') {
    sc.push(c);
    //when i get ( push in stack
  }
  else if(c==')'){
    //when i get ) this pop from stack while i get (
    while(!sc.empty()&&sc.top()!='('){
      res+=sc.top();
      sc.pop();
    }
    //pop from stack (
    if(!sc.empty()){
      sc.pop();
    }
    
  }
//  &&sc.top()!='('
  else{
    //while get oparator then i check this operator power is less than stack top oparaotor
    while(!sc.empty()&&sign(c)<=sign(sc.top())){
      res+=sc.top();
      sc.pop();
    }
    //if this oparator power is greater than stack top oparator then push in stack
    sc.push(c);
  }
}
while(!sc.empty()) {
  if(sc.top()!='(')res+=sc.top();
  sc.pop();
}
cout<<res<<nl;
}

int32_t main() {
  solve();
  return 0;
}