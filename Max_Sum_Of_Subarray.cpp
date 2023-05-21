#include<iostream>
using namespace std;
int max(int a[],int n){
	int m=0;
	int c=0;
	for(int i=1;i<n;i++){
		c=c+a[i];
		if(c>m){
			m=c;
		}
		else if(c<0){
			c=0;
		}
		
	}
	cout<<"max element:"<<m;
}

int main(){
	int a[6]={5,-4,-2,6,-1,-1};
	int m=sizeof(a)/sizeof(a[0]);
	max(a,m);
	return 0;
	
}
