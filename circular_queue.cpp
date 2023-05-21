#include<stdio.h>
#define N 5
int a[N];int top=-1,bott=-1;
void push(int num){
	if((bott+1)%N==top){
		printf("\nstack is full!!");
	}
	else if(top==-1&&bott==-1){
		top++;bott++;
		a[bott]=num;
	}
	else{
		bott=(bott+1)%N;
		a[bott]=num;
	}
}
void pop(){
	if(top==-1&&bott==-1){
		printf("\nstack is empty!!");
	}
	else if(top==bott){
		 top=-1;bott=-1;
	}
	else{
	   top=(top+1)%N;
	
	}	
}
void display(){
    int i=top;
    while(i!=bott){
    	printf("%d ",a[i]);
    	i=(i+1)%N;
	}
	printf("%d ",a[bott]);

	
}

int main(){
	
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	display();
	pop();	printf("\n");
		display();
		pop();	printf("\n");
	
		display();	push(2);
		pop();	printf("\n");
		display();
		pop();	printf("\n");
		display();
		pop();	printf("\n");
		display();
	
	return 0;
}

