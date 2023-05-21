#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* tree(){
	struct node* newnode=new node();
	int data;
	cout<<"  enter a data: ";  
	cin>>data;
	if(data==0){
		return 0;
	}
	newnode->data=data;
	cout<<"\nfor left node of "<<data;
	newnode->left=tree();
	cout<<"\nfor right node of "<<data;
	newnode->right=tree();
  return newnode;	
}
void preorder(struct node* root){
	if(root==0){
        return;
		  
	}	cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
}
void inorder(struct node* root){
	if(root==0){
        return;
		  
	}	inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
}
int main(){
	struct node* root;
	root=tree();
	preorder(root);
	cout<<endl;
	inorder(root);
	return 0;
}
