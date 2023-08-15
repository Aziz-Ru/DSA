#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int

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
		size--;
	}
	int top(){
		return arr[size];
	}
	bool is_empty(){
		if(size==0){
			return true;
		}
		return false;
	}

};
int32_t main() {
 Stack sc;
 for(int i=1;i<10;i++){
 	sc.push(i);
 }
 while(!sc.is_empty()){
 	cout<<sc.top()<<' ';
 	sc.pop();
 }
  return 0;
}