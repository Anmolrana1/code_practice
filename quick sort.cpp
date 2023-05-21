 #include<iostream>
using namespace std;
void swap(int arr[],int i,int j ){
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int  partion(int arr[],int lb,int ub){
	int start=lb;
	int pivot=arr[lb];
	int end=ub;
	while(start<end){
	  while(arr[start]<=pivot){
	       start++;
	  }

		while(arr[end]>pivot){
	        end--;
		}
		
		if(start<end){
		  swap(arr,start,end);
		}
    }
	if(start>end){
	swap(arr,lb,end);
	}
	return end;
	

}
void  quikShort(int arr[],int lb, int ub){
     	if(lb<ub){
     		int loc;
	  loc=partion(arr,lb,ub);
	    quikShort(arr,lb,loc-1);
        quikShort (arr,loc+1,ub);
   	   
	}
}
int main(){
	int arr[9]={8,7,6,1,0,9,2};	
     quikShort( arr, 0, 6);
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
