#include<iostream>
using namespace std;
void swap(int a[],int i,int j ){
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void heapify(int a[],int n,int i){
	while(2*i<=n){
		int l=2*i;int r=l+1;
		if(a[l]>a[r]||r>n){
			if(a[l]>a[i]){
				swap(a,l,i);
				i=l;
			}
			else{
				break;
			}
		}
		else if(a[r]>a[i]){
			swap(a,r,i);
			i=r;
		}
		else{
			break;
		}
	}
}
void build_heap(int a[],int n){
	 
	for(int i=n/2;i>=1;i--){
		heapify(a,n,i);
	}
}
void heap_sort(int a[],int n){
	int s=n;
	for(int i=1;i<n;i++){
		swap(a,s,1);
		s--;
		heapify(a,s,1);
	}
}
void insert(int a[],int n,int val){
	n++;
	a[n]=val;int i=n/2;
	while(i>=1){
		heapify(a,n,i);
		i=i/2;
	}
}
int main(){
    int a[]={0,15,5,20,1,17,10,30};
    int n=sizeof(a)/sizeof(a[0])-1;
    cout<<"\nheap before heapify  : ";
    for(int i=1;i<=n;i++){
    	cout<<a[i]<<" ";
	}
    build_heap(a,n);
    cout<<"\nheap after heapify  :  ";
    for(int i=1;i<=n;i++){
    	cout<<a[i]<<" ";
	}	insert(a,n,4);
    cout<<"\nheap after inserting :  ";
    for(int i=1;i<=n+1;i++){
    	cout<<a[i]<<" ";
	}
	heap_sort(a,n+1);
    cout<<"\nheap after sorting  :  ";
    for(int i=1;i<=n+1;i++){
    	cout<<a[i]<<" ";
	}

	return 0;
}
