#include <iostream>
using namespace std;
void pascal(int n){
	int arr[n][n];
	for(int i=0;i<n;i++){
		    for(int k=0;k<=i;k++){
		    	if(k==0||k==i)
		    		arr[i][k]=1;
		else
			arr[i][k]=arr[i-1][k-1]+arr[i-1][k];
	        
	         }
    }
		for(int i=0;i<n;i++){
				for(int j=0;j<n-i;j++){
				     cout<<" ";
				}
		    for(int k=0;k<=i;k++){
		    	cout<<arr[i][k]<<" ";
		
	        }
	cout<<endl;
        }
}
int main(){
	pascal(3);
	
	return 0;
}
