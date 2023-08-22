#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int Data;
	struct Node* Next;
};

void insertAtBeg(struct Node** Head,int data){
Node* NewNode=(Node*)malloc(sizeof(Node));
NewNode->Data=data;
NewNode->Next=(*Head);
(*Head)=NewNode;
}

void insertAfter(struct Node* Head,int x){
	if(Head==NULL){
		cout<<"Previous Node is NULL";
		return;
	}
	Node* NewNode=(Node*)malloc(sizeof(Node));
	NewNode->Data=x;
	NewNode->Next=Head->Next;
	Head->Next=NewNode;

}

void insertAtEnd(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->Data = new_data;
  new_node->Next = NULL;

  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }
  struct Node* last = *head_ref; 
  while (last->Next != NULL) last = last->Next;

  last->Next = new_node;
  return;
}

int searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
  if (current->Data == key) return 1;
  current = current->Next;
  }
  return 0;
}

void printList(struct Node* node) {
  while (node != NULL) {
  printf(" %d ", node->Data);
  node = node->Next;
  }
}

void solve(){
	struct Node* head=NULL;
	for(int i=0;i<8;i++){
			int x; cin>>x;
			if(i<3){
				insertAtBeg(&head,x);
			}
			else insertAtEnd(&head,x);
	    }
	printList(head);
}
int main() {
  solve();
  return 0;
}
