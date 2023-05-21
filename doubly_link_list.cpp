#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
	struct node* pre;
};
struct node*head;
struct node*tail;
void insert(int val){
	struct node* nextnode=new node();
	nextnode->data=val;
	nextnode->next=NULL;
	nextnode->pre=NULL;
	if(head==NULL){
		head=nextnode;
		return;
	}
	struct node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	nextnode->pre=temp;
	temp->next=nextnode;
	tail=nextnode;
}
void show(){
	struct node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}
void show2(){
	struct node* temp=tail;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->pre;
	}
}
void del(int val){
	struct node* temp=head;
	struct node* pre;
	struct node* nxt;
	while(temp->data!=val){
		pre=temp;
		temp=temp->next;
		nxt=temp->next;
	}	
	pre->next=temp->next;
	nxt->pre=pre;
}
void serch(int val){
	struct node *temp=head;
	int c=1;
	while(temp!=NULL){
		if(temp->data==val){
			cout<<endl<<c;
			c++;
		}
	
		temp=temp->next;
	}

	if(c==1){
		cout<<endl<<"noooo";
	}
	
}
int main(){
	insert(2);
	insert(5);
	insert(8);
	insert(6);
	insert(9);
	show2();cout<<endl;
	show();
	del(8);
	cout<<endl;
	show();
	serch(9);
	cout<<endl;
		show2();
	return 0;
}
