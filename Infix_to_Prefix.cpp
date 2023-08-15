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
int precedence(char c){
	if(c=='^') return 3;
	else if(c=='*'||c=='/') return 2;
	else if(c=='+'||c=='-') return 1;
	return -1;
}


int32_t main() {
 string s,res="";
 cin>>s;
 reverse(s.begin(),s.end());
 Stack sc;
 for(int i=0;i<s.size();i++){
 	if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')) res+=s[i];
 	else if(s[i]==')'){
 	sc.push(s[i]);
 	}
 	else if(s[i]=='('){
 		while(!sc.empty()&&sc.top()!=')'){
 			res+=sc.top();
 			sc.pop();
 		}
 		if(!sc.empty()){
 			sc.pop();
 		}
 	}
 	else{
 		while(!sc.empty()&&precedence(sc.top())>=precedence(s[i])){
 			res+=sc.top();
 			sc.pop();
 		}
 		sc.push(s[i]);
 	}
 }
 while(!sc.empty()){
 	res+=sc.top();
 	sc.pop();
 }
 reverse(res.begin(),res.end());
 cout<<res<<nl;

  return 0;
}