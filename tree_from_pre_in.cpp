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
int search(int in[],int start,int end,int val){
	for(int i=start;i<=end;i++){
		if(val==in[i]){
			return i;
		}
	}
}
node* buildBst(int pre[],int in[],int start,int end){
	static int prestart=0;
	if(start>end){
		return NULL;
	}
	int element=pre[prestart];
	prestart++;
	node* root=new node(element);
	int pos=search(in,start,end,element);
	root->left=buildBst(pre,in,start,pos-1);
	root->right=buildBst(pre,in,pos+1,end);
	return root;
}
void prenode(node* root){
	if(root==NULL){
	return ;	
	}
		cout<<root->data<<" ";
		prenode(root->left);
		prenode(root->right);

}
int main(){
    int pre[]={1,2,4,5,7,3,6,8};
    int in[]={4,2,7,5,1,8,6,3};
    int n=sizeof(pre)/sizeof(pre[0]);
    node* root;
    root=buildBst(pre,in,0,n-1);
    prenode(root);
	return 0;
}
