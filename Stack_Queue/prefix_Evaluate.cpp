#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
class Stack{
private:
	int size;
	int arr[1000];
public:
	Stack(){
		size=0;
	}

	void push(int data){
	    size++;
        arr[size]=data;
	}
	void pop(){
		arr[size]=0;
		size-=1;
	}
	int top(){
		return arr[size];
	}
	bool empty(){
		if(size==0){
			return true;
		}
		return false;
	}

};


int32_t main() {
cout<<"All number less than 10 "<<nl;
 string s;
 cin>>s;

 //cout<<s<<nl;
 Stack sc;
 for(int i=s.size()-1;i>=0;i--){
 if(s[i]>='0'&&s[i]<='9'){
 	sc.push(s[i]-'0');
 }
 else{
 	int x=sc.top();
 	sc.pop();
 	int y=sc.top();
 	//cout<<x<<' '<<y<<nl;
 	sc.pop();
 	if(s[i]=='+'){
      sc.push(x+y);
 	}
 	else if(s[i]=='-'){
 		sc.push(x-y);
 	}
 	else if(s[i]=='*'){
 		sc.push(x*y);
 	}else{
 		sc.push(x/y);
 	}
 }

 }
 cout<<sc.top();
 sc.pop();


  return 0;
}