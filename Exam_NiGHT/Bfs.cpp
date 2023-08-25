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
    Node* current=head;
    while(current->next){
      current=current->next;
    }
    current->next=new_node;
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

int main() {
  int n,e; cin>>n>>e;

  int visit[100]={0};
  LinkedList ll[n+1];

  for(int i=0;i<e;i++){
    int x,y;
    cin>>x>>y;
    ll[x].push(y);
    ll[y].push(x);
  }
  Queue q;
  q.push(1);
  //cout<<q.top();
  while(!q.empty()){
   int x=q.top();
   q.pop();
   
   if(!visit[x]){
    cout<<x<<' ';
    visit[x]=1;
   }
   
   Node* current=ll[x].head;

   while(current){

          int data=current->data;
               if(!visit[data]){
               q.push(data);
            }

     current=current->next;
   }

  }

  return 0;
}