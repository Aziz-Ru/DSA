#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
class Node{
public:  
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=nullptr;
	}
};
class LinkedList{
private:
	Node* head;
public:
	LinkedList(){
		head=nullptr;
	}
	void push(int val){
		Node* new_node=new Node(val);
		if(!head){
			head=new_node;
		}
		Node* temp=head;
		while(temp->next){
			temp=temp->next;
		}
		temp->next=new_node;
	}

};
int32_t main() {
	LinkedList arr[5];
    for(int i=1;i<5;i++){
    	int x,y;
    	cin>>x>>y;
    	arr[x].push(y); 
    	arr[y].push(x);
    }
  return 0;
}