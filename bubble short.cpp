#include <iostream>
using namespace std;

int main(){
int a[5]={20,12,7,2,1};
int n=5;

for(int i=0;i<5-1;i++) {
				bool falg=false;
				for(int j=0;j<5-i-1;j++) {
					if(a[j]>a[j+1]) {
						int temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
						falg=true;
					}
				}
				if(falg==false)
					break;
			}
	cout<<"array after shorting:"<<endl;
	for(int j=0;j<n;j++){
		cout<<a[j]<<" ";
	}

	return 0;
}
