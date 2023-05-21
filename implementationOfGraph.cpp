#include<iostream>
using namespace std;
struct Node{
	int value;
	Node* next=NULL;
};  

void addNewNode(int n,Node v[],int p,int ne){
	Node* newNode=new Node;
	newNode->value=ne;
	if(v[p].next==NULL){
		v[p].next=newNode;
	}
	else {
		newNode->next=v[p].next;
		v[p].next=newNode;
	
	}
}
void display(int n,Node v[]){
	Node*ptr;
	for(int i=0;i<n;i++){
		ptr=v[i].next;	
		cout<<v[i].value;
	while(ptr!=NULL){			
		cout<<"->"<<ptr->value;
		ptr=ptr->next;
	}
	cout<<endl;
	}
}
int main(){
	int n;
	cout<<"enter no of vertices:";
	cin>>n;
	Node v[n];
	for(int i=0;i<n;i++){
		v[i].value=i;
	}
	addNewNode(n,v,2,4);

	addNewNode(n,v,1,4);
	addNewNode(n,v,3,4);
	addNewNode(n,v,0,2);
	addNewNode(n,v,2,3);
	display(n,v);
return 0;
}
