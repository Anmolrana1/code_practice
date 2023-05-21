#include<iostream>
#include <string>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
	node(int val){
		data=val;
		left=right=NULL;
	}
};
node* minRightSubNode(node* root){
	node* current=root;
	while(current->left!=NULL){
		current=current->left;
	}
	return current;
}


node* del(node* root,int val){
	if(root==NULL){
		return NULL;
	}
	if(val<root->data){
		root->left= del(root->left,val);
	}
	else if(val>root->data){
		root->right=del(root->right,val);
	}
	else{
		if(root->left==NULL&&root->right==NULL){
			free(root);
			return NULL;
		}
	    else if(root->left==NULL){
	     		node* temp=root->right;
	     		free(root);
	     		return temp;
			 }
	    else if(root->right==NULL){
	     		node* temp=root->left;
	     		free(root);
	     		return temp;
			 }
		node* temp=minRightSubNode(root->right);
		root->data=temp->data;
		root->right=del(root->right,temp->data);
	}
	return root;
}

node* insert(node* root,int data){
		if(root==NULL){
			return new node(data);
		}
		else if(data>root->data){
			root->right=insert(root->right,data);
		}
		else{
			root->left=insert(root->left,data);
		}
		return root;
}
void preorder(node* root){
	if(root==NULL){
        return;
		  
	}
		cout<<root->data<<" ";	
		preorder(root->left);
		preorder(root->right);
}
node* search(node* root,int val){
	if(root==NULL){
        return NULL;	  
	}
   	if(val==root->data){
   		return root;
	   }
	   else if(val<root->data){
	   	  return search(root->left,val);
	   }
	   else{
	   	  return search(root->right,val);
   		}
   		
}
int main(){
    node* root=NULL;
    root=insert(root,5);
    insert(root,1);
    insert(root,3);
    insert(root,8);
    insert(root,7);
    insert(root,4);
    insert(root,6);
    preorder(root);
    if(search(root,109)==NULL){
    	cout<<"\ndoes not exist";
	}
	else{
    	cout<<"\nexist";
	}
	return 0;
}
