#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
// root theke left subtree value kom hobe
// root hote right subtree value beshi hbe
class Tree{
public:
	int data;
	Tree* left;
	Tree* right;
	Tree(int val){
		data=val;
		left=nullptr;
		right=nullptr;
	}
};
class BinaryTree{
private:
	Tree* root;
public:
	BinaryTree(){
		root=nullptr;
	}
	void insert(int data){
		root=Insert(root,data);
	}
	Tree* Insert(Tree* node,int data){

		if(!node){
			return new Tree(data);
		}
		if(node->data>data){
			//check if given data is smaller than root data then it goes left
			node->left=Insert(node->left,data);
		}
		else if(node->data<data){
			//check if given data is greate than root data then it goes left
			node->right=Insert(node->right,data);
		}
		return node;
	}
	//traverse tree by preorder
	void preorder(Tree* node){
		if(node){
			cout<<node->data<<' ';
			preorder(node->left);
			preorder(node->right);
		}
	}
	void Inorder(Tree* node){
		if(node){
			Inorder(node->left);
		    cout<<node->data<<' ';
			Inorder(node->right);
		}
	}
	void Postorder(Tree* node){
		if(node){
		    Postorder(node->left);
			Postorder(node->right);
			cout<<node->data<<' ';
		}
	}
	void Traverse_Preorder(){
		preorder(root);
	}
	void Traverse_Inorder(){
		Inorder(root);
	}
	void Traverse_Postorder(){
		Postorder(root);
	}


};

int32_t main() {
 BinaryTree bt;
 bt.insert(10); 
 bt.insert(18);
 bt.insert(6);
 bt.insert(4);
 bt.insert(21);
 bt.insert(8);
 bt.insert(15);
 bt.insert(22);
 bt.insert(3);
 bt.insert(1);
 bt.insert(5);
 bt.Traverse_Preorder();
 cout<<nl;
 bt.Traverse_Inorder();
 cout<<nl;
 bt.Traverse_Postorder();
 
   return 0;
}