#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'

struct Node
{
  int data;
  Node *left,*right;
  Node(int val){
    data=val;
    left=NULL;
    right=NULL;
  }
};
Node* InsertBst(Node *root,int val){
  if(root==NULL){
    return new Node(val);
  }
  if(val<root->data){
    root->left=InsertBst(root->left,val);
  }
  else if(val>root->data){
    root->right=InsertBst(root->right,val);
  }
  else{
    cout<<val<<" is Exist in Tree"<<nl;
  }
  return root;
}


void print_inorder(Node *root){
  if(root==NULL) return;
  print_inorder(root->left);
  cout<<root->data<<' ';
  print_inorder(root->right);
  //cout<<root->data<<' ';
}


  
int32_t main() {
  Fast;

  Node *root=NULL;
  root=InsertBst(root,5);
  InsertBst(root,1);
  InsertBst(root,3);
  InsertBst(root,4);
  InsertBst(root,2);
  InsertBst(root,7);
  InsertBst(root,2);
  print_inorder(root);
  cout<<nl;
  
  
  
  return 0;
}
