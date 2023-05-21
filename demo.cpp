#include<iostream>
using namespace std;
void heapify(int a[],int n,int i){
	int x=a[i];int max;
	while(2*i<=n){
		int l=2*i;
		int r=2*i+1;
		if(a[l]>a[r] || r>n){
		max=l;
		}
		else{
			max=r;
		
		}
		if(a[max]>x){
			a[i]=a[max];
			i=max;
		}
		else
			break;
		
	}
a[i]=x;
}
void  build(int a[],int n){
	for(int i=(n/2);i>=1;i--){
		heapify(a,n,i);
	}
}
void swap(int a[],int i,int j ){
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void Heapsort(int a[],int n){
	build(a,n);
	int s=n;
   while(s>1){
		swap(a,1,s);
		s--;
		heapify( a,s,1);	
	}
}
int main(){
int a[10]={0,1,5,9,2,4,8,3,6,7};
	int n=9;

   
	for(int i=1;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	Heapsort(a,n);
		for(int i=1;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
