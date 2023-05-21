#include<iostream>
using namespace std;
class mergesort{
	public:
		void merge(int arr[],int lb,int ub,int mid);
		void merge_sort(int arr[],int lb, int ub);
};
void mergesort::merge(int arr[],int lb,int ub,int mid){
	int i=lb;
	 int j=mid+1;
	  int k=lb;
	  int b[50];

	while(i<=mid&&j<=ub){
		if(arr[i]<arr[j]){
			b[k]=arr[i];
			i++;
			k++;
		}
		else{
			b[k]=arr[j];
			j++;
			k++;
		}
	}

		while(i<=mid){
			b[k]=arr[i];
			i++;
			k++;
		}
		
		
	   	while(j<=ub){
			b[k]=arr[j];
		    j++;
			k++;
	    	}

	    for(int i=lb;i<k;i++){
	    	arr[i]=b[i];
		}
}
void mergesort::merge_sort(int arr[],int lb, int ub){
     	if(lb<ub){
	   int mid;
	    mid=(lb+ub)/2;
	    merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
   	    merge(arr,lb,ub,mid);
	}
}
int main(){
	int arr[9]={6,5,12,10,9,1,4,3,2};	
	
	mergesort m;
	m.merge_sort(arr,0,8);
	
	for(int i=0;i<9;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
