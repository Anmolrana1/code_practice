#include<iostream>
using namespace std;
class queue{
	public:
		int size=5;
		int a[5];
		int f=-1;
		int r=-1;
	void enqueue(int value){
			if(f==0&&r==size-1){
				cout<<"queue is full"<<endl;	}
		else 
		f=0;r++;
		 a[r]=value;	 
	}
	void dequeue(){
			if(f==-1&&r==-1){
				cout<<"queue is empty"<<endl;}
		else if(f>=r){
			f=-1;		r=-1;
		}
		else
		   f++;
		}
		void show(){
			for(int i=f;i<=r;i++){
			cout<<a[i]<<" ";
			}
		}
};
int main(){
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.dequeue();
	q.show();
	return 0;
}
