#include<iostream>
using namespace std;
void Heapify(int a[],int i,int n){
	int x=a[i]; 
	int min;
	int l=2*i;
	int r=l+1;
	while(2*i<=8)
	{		
		if(a[l]<a[r] || r>n){
		  min=l; 
		  }
		else{
		  min=r;
		  }
		if(x<a[min]){
			a[i]=a[min];
			i=min;
			}
		else cout<<".";break;
		   
	
	  }
   a[i]=x;

}
void Build_Heap(int a[],int n){
	for(int i=(n/2);i>=0;i--){

		Heapify( a,i,n);
	}
}
void swap(int arr[],int i,int j ){
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void Heapsort(int a[],int n){
	Build_Heap( a, n);
	int s=n;
	while(s>n){
		swap(a,1,s);
		Heapify( a,1,s);	
	}
}
int main(){
	int a[10]={0,1,5,9,2,4,8,3,6,7};
	int n=9;
		for(int i=1;i<10;i++){
		cout<<a[i]<<"  ";
	}
	 Heapsort(a,n);
	cout<<endl;
	for(int i=1;i<10;i++){
		cout<<a[i]<<"  ";
	}
}
