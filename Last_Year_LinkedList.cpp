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
	void add(int data){
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
	void merge(LinkedList &other){
		if(!other.head){
			return;
		}
		else if(!head){
			head=other.head;
			return;
		}
		Node* temp=head;
		while(temp->next){
			temp=temp->next;
		}
		temp->next=other.head;

	}
	void display(){
		Node* temp=head;
		while(temp){
			cout<<temp->data<<' ';
			temp=temp->next;
		}

	}
};

int32_t main() {
	LinkedList llA,llB,llC;
	for(int i=0;i<7;i++){
		llA.add(i);
	}
 for(int i=11;i<20;i++){
		llB.add(i);
	}
	// llB.display();
	// cout<<nl;
	// llB.display();
	llC.merge(llA);
	llC.merge(llB);
	llC.display();
  return 0;
}