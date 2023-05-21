#include <iostream>
using namespace std;
void insertion_sort(){
	
	int a[6]={1,6,2,9,3,5},d,j;
			
    for(int i=1;i<5;i++){
    	  
   		d=a[i];  j=i-1;
   		
   	    while(j>=0&&d<a[j]){
   	    	
   	      	a[i]=a[j];
   	     	j--;
   	     
	
		}
   	    	a[j+1]=d;
	} 
	
   	cout<<"array:";
	for(int i=0;i<6;i++){
			cout<<a[i]<<" ";
	}
		cout<<"\n\n";
}

int main(){
	insertion_sort();
	return 0;
}
