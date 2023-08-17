#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
class Queue{
private:
	Node* head;
public:
	Queue(){
		head=nullptr;
	}
	void push(int data){
		Node* new_node=new Node(data); 
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



void bfs(int node,LinkedList arr[]){
int visit[1000]={0};
Queue q;
q.push(node);
cout<<node<<' ';
while(!q.empty()){
	int x= q.front();
	q.pop();
	visit[x]=1;
	Node* temp=arr[x].head;
	while(temp){
		int data=temp->data;
		if(!visit[data]){
			visit[data]=1;
			cout<<data<<' ';
			q.push(data);
		}
		temp=temp->next;
	}
  }
}

int main() {
	LinkedList arr[10];
	int visit[50]={0};
    for(int i=1;i<8;i++){
    	int x,y;
    	cin>>x>>y;
    	arr[x].push(y); 
    	arr[y].push(x);
    }
    bfs(1,arr);
    
  return 0;
}