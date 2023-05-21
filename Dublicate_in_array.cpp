#include<iostream>
using namespace std;
int max(int a[],int n){
	int c,k;
	for(int i=0;i<n;i++){
	c=1;
	if(a[i]!=k){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				c++;
				k=a[i];
			}
		}
	}
		
	if(c>1){
		cout<<"dublicate of "<<a[i]<<" are "<<c<<" times"<<endl;
	}
}
}
int main(){
	int a[]={5,-4,-5,6,-1,-1,-1};
	int m=sizeof(a)/sizeof(a[0]);
	max(a,m);
	return 0;
	
}
