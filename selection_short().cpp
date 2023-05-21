#include <iostream>
using namespace std;
void swap(int arr[],int i,int j ){
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void bouble_short(int a[],int n){


	for(int i=0;i<n-1;i++){	
	   int min=i;
	   for(int j=i+1;j<n;j++){
	   		if(a[j]<a[min]){
	   			min=j;
		
			   }
			 swap(a,min,i);
		   }
	   	}
	  
}
int main(){
	int a[5]={20,12,7,2,1};
	bouble_short(a,5);
	 cout<<"array after shorting:";
		for(int i=0;i<5;i++){
			cout<<a[i]<<" ";
		}
	return 0;
}
