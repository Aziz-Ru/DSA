#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'

struct Node{ 
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=nullptr;
	}
};

class LinkedList{

	
public:
	Node* head;
	LinkedList(){
		head=nullptr;
	}
	void push(int val){
		Node* new_node=new Node(val);
		if(!head){
			head=new_node;
			return;
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
    for(int i=1;i<5;i++){
    	Node* temp=arr[i].head;
    	while(temp){
    		cout<<temp->data<<' ';
    		temp=temp->next;
    	}
    	cout<<nl;
    }
  return 0;
}