#include<iostream>
using namespace std;
int max(int a[],int n){
	int c;
  for(int i=0;i<n;i++){
  cout<<a[i]<<" ";}
  cout<<endl;
	for(int i=0;i<n/2;i++){
	
		   c=a[i];
		   a[i]=a[n-i-1];
		   a[n-i-1]=c;
		
	}

  for(int i=0;i<n;i++){
  cout<<a[i]<<" ";}
}
int main(){
	int a[6]={5,-4,15,6,12,-1};
	int m=sizeof(a)/sizeof(a[0]);

	max(a,m);
	return 0;
	
}
