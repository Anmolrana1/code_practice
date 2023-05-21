#include <iostream>
using namespace std;
int main(){
	int a[]={1,1,1,1,1};
	int b=sizeof(a)/sizeof(a[1]);
	int c[]={1,1,0,0,0};
	int d=sizeof(c)/sizeof(c[1]);
	int arr[d];int ca=0;int arr1[d];
	for(int i=d;i>=0;i--){
		
		if(a[i]+c[i]+ca==2){
			arr[i]=0;
			ca=1;
		}
		else if(a[i]+c[i]+ca==1){
			arr[i]=1;
			ca=0;
		}
		else if(a[i]+c[i]+ca==3){
			arr[i]=1;
			ca=1;
		}
		
	}
	for(int i=0;i<d;i++){
		cout<<arr[i];
	}
		cout<<endl;
    
	
	if(ca==0){
		cout<<"no change: "<<endl;
    		for(int i=0;i<d;i++){
		cout<<arr[i];
	}
	
	}
	
	else if(ca==1){
		cout<<" change: "<<endl;
				
	for(int i=d;i>=0;i--){
		if(arr[i]+ca==2){
			arr1[i]=0;
			ca=1;
		}
		else if(arr[i]+ca==1){
			arr1[i]=1;
			ca=0;
		}
		else if(arr[i]+ca==3){
			arr1[i]=1;
			ca=1;
		}
		
    	
	}
		for(int i=0;i<d;i++){
		cout<<arr1[i];
	}

}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

