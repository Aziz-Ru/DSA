#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
struct Node{
  int data;
  Node* next;
  Node(int val){
    data=val;
    next=nullptr;
  }
};
class Queue{
public:
  Node* head;
  Queue(){
    head=nullptr;
  }

  void push(int val){
    Node* new_node=new Node(val);
    if(!head){
      head=new_node;
      return;
    }
    Node* current=head;
    while(current->next){
      current=current->next;
    }
    current->next=new_node;
   }

   void pop(){
    if(!head){
      cout<<"Empty";
      return;
    }
    head=head->next;
    
   }
   int top(){
    return head->data;
   }
   bool empty(){
    return head==nullptr;
   }
};
int main(){
Queue q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
// cout<<q.top()<<' ';
 // q.pop();
while(!q.empty()){
  cout<<q.top()<<' ';
  q.pop();
 
}
}