#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	int data;
	struct node* next;

};
struct node*head;

void insert(int val){
	struct node* nextnode=new node();	
	nextnode->data=val;
	nextnode->next=NULL;
	
	if(head==NULL){
		head=nextnode;
		nextnode->next=head;
		return;
	}
	else{
	struct node* temp=head;
		while(temp->next!=head){
		temp=temp->next;
	}
	nextnode->next=head;
	temp->next=nextnode;
	}
}
void del(int val){
	struct node* temp=head;
	struct node* pre;
	while(temp->data!=val){
        pre=temp;	
		temp=temp->next;
		}
		pre->next=temp->next;
		free(temp);
}	


void show(){
	struct node* temp=head;
	while(temp->next!=head){
	
	cout<<temp->data<<"->";
		temp=temp->next;
		}
		cout<<temp->data<<"->NULL";
}


int main(){
	insert(2);
	insert(5);
	insert(8);
	insert(6);
	insert(9);
	insert(10);
    cout<<endl;
	show();
	del(6);
	cout<<endl;
	show();

	return 0;
}
