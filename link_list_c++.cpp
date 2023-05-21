#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node *head;
void insert(int val){
	node *n=new node();
	n->data=val;
	n->next=NULL;
	if(head==NULL){
		head=n;
		return;		
	}
	node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
    }
   temp->next=n;
	}

void show(){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";	
		temp=temp->next;
	}	
	cout<<"null";
}
void search(int val){
	node *temp=head;int b=0,c=0;
	while(temp!=NULL){c++;
		if(temp->data==val){
			cout<<"\n"<<c;
			b++;
		}
		temp=temp->next;
		}
		if(b!=1){
			cout<<"\nnot present";
		}
}
void deleteFromAnyPosition(int p){
	node *temp=head,*prenode;int c=0;
	while(c!=p-1){
		prenode=temp;
		c++;
		temp=temp->next;
	}
	prenode->next=temp->next;	
}
void insert_in_any_place(int val){
	int n,c=0;
	cout<<"\nenter the new position:";
	cin>>n;
	node *newnode=new node();
	newnode->data=val;
    newnode->next=NULL;
	node *temp=head;
	while(c!=n-1){
		c++;
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	
}
void reverse(){
	node *temp=head,*pre,*curr,*nextnode;
	pre=NULL;
	curr=nextnode=temp;
	while(nextnode!=NULL){
		nextnode=nextnode->next;
		curr->next=pre;
		pre=curr;
		curr=nextnode;
	}
	head=pre;
		
}
int main(){
    insert(34);
    insert(14);
    insert(24);   
	insert(2);
	insert(7);   
    show();
    search(7);
    search(4);
    deleteFromAnyPosition(3);
    show();
    insert_in_any_place(13);
    show();
	return 0;
}
