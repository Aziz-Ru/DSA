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



void dfs(int node,int parent,LinkedList arr[],int visit[]){
	if(visit[node]){
		return;
	}
	cout<<node<<' ';
	visit[node]=1;
	Node* temp=arr[node].head;
	while(temp){
		if(!visit[temp->data]){
			dfs(temp->data,node,arr,visit);
		}
		temp=temp->next;
	}
}
int main() {
	LinkedList arr[5];
	int visit[50]={0};
    for(int i=1;i<5;i++){
    	int x,y;
    	cin>>x>>y;
    	arr[x].push(y); 
    	arr[y].push(x);
    }
    dfs(1,0,arr,visit);
    
  return 0;
}