#include<iostream>
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
int search(int pro[],int start,int end,int val){
	while(pro[end]>val){
		end--;
	}
	return end;
}
node* build(int pro[],int start ,int end){
	if(start>end){
		return NULL;
	}
	int index=end;
	int element=pro[index];
	node* root=new node(element);
	int pos=search(pro,start,end-1,element);
	root->left=build(pro,start,pos);
	root->right=build(pro,pos+1,end-1);
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
int main(){
    int pro[]={1,7,5,50,40,10};
    int n=sizeof(pro)/sizeof(pro[0])-1;
    node* root=build(pro,0,n);
    preorder(root);
	return 0;
}
