#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nl '\n'

class node{
	//this class make a node 
public:
	int data;
	node* next;
	node(int val){
		//this constractor
		data=val;
		next=nullptr;
	}

};
class LinkedList{
private: 
	node* head;
public:
	LinkedList(){
		//constractor 
		head=nullptr;
	}
	void InsertAtEnd(int data){
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
	void InsertBeforeHead(int data){
		node* new_node=new node(data);
		if(!head){
			head=new_node;
			return;
		}
		new_node->next=head;
		head=new_node;
	}
	void InsertAfterNumber(int new_val,int target){
		node* temp=head;
		while(temp){
			if(temp->data==target){
				node* new_node=new node(new_val);
				new_node->next=temp->next;
				temp->next=new_node;
				break;
			}
			temp=temp->next;
		}
	}
	void DeleteData(int target_data){
			if(!head){
				cout<<"LinkedList Empty";
			}
			else if(head->data==target_data){
				head=head->next;
				return;
			}
			node* temp=head;
			while(temp->next){
				if(temp->next->data==target_data){
					temp->next=temp->next->next;
					return;
				}
				temp=temp->next;
			}
			cout<<"Data is not found in LinkedList";

		}
	void Search_value(int data){
		node* temp=head;
		while(temp){
			if(temp->data==data){
				cout<<"Found the value";
				return;
			}
			temp=temp->next;
		}
		cout<<"Not Found";
	}

	void merge(LinkedList &other){
		if(!other.head){
			return;
		}
		else if(!head){
			head=other.head;
			return;
		}
		node* temp=head;
		while(temp->next){
			temp=temp->next;
		}
		temp->next=other.head;

	}
	void Display(){
		node* temp=head;
		while(temp){
			cout<<temp->data<<' ';
			temp=temp->next;
		}
	}


};


int main() {
	LinkedList ll;
  for(int i=0;i<6;i++){
  	ll.InsertAtEnd(i);
  }
  ll.InsertAfterNumber(4,2);
  ll.InsertBeforeHead(8);
  ll.Display();
  ll.Search_value(5);
  ll.DeleteData(8);
  ll.Display();

 
  return 0;
}