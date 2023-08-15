#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
class node{
public:
	int data;
	node* next;
	node(int val){
		data=val;
		next=nullptr;
	}
	
};
class Queue{
private:
	node* head;
public:
	Queue(){
		head=nullptr;
	}
	void push(int data){
		node* new_node=new node(data); 
		if(!head){
			head=new_node;
			return;
		}
		node* temp=head;
		while(temp->next){
			temp=temp->next;
		}
		temp->next=new_node;
	}
	void pop(){
		if(!head){
			cout<<"Queue is Empty";
			return;
		}
		head=head->next;
	}
	int front(){
		return head->data;
	}
	bool empty(){
		return head==nullptr;
	}

};

int32_t main() {
 Queue q;
 q.push(1);
 q.push(2);
 q.push(3);
 q.push(4);
 while(!q.empty()){
 	cout<<q.front()<<' ';
 	q.pop();
 }
  return 0;
}