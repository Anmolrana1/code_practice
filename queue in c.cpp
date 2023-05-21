
	#include<stdio.h>
		int a[5],size=5;
		int f=-1;
		int r=-1;
	void enqueue(int value){
			if(f==0&&r==size-1){
			printf("queue is full");	}
		else 
		f=0;r++;
		 a[r]=value;	 
	}
	void dequeue(){
			if(f==-1&&r==-1){
			printf("queue is empty");}
		else if(f>=r){
			f=-1;		r=-1;
		}
		else
		   f++;
		}
		void show(){
			for(int i=f;i<=r;i++){
		printf("%d",a[i]);
			}
		}

int main(){

	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	show();
	return 0;
}
