
#include <iostream>
using namespace std;
void Counting_sort(int a[],int n ,int k){
	int b[n],c[k];
	for(int i=0;i<=k;i++){
		c[i]=0;
	}
	for(int i=0;i<n;i++){
		c[a[i]]=c[a[i]]+1;
	}
	for(int i=1;i<=k;i++){
		c[i]=c[i]+c[i-1];
	}
	for(int i=n-1;i>=0;i--){
	   b[c[a[i]]-1]=a[i];
	   c[a[i]]=c[a[i]]-1;
	}
		for(int i=0;i<n;i++){
		a[i]=b[i];
	}
}
int main(){
	int a[9]={5,7,5,4,1,3,6,2,1};
	Counting_sort(a,9,7);
	cout<<endl;
	for(int i=0;i<9;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
}
