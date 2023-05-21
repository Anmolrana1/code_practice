#include <iostream>
using namespace std;
int s[10][10];
void op(int arr[],int i,int j){

	if (i==j){
		cout<<arr[i];
	}
	else {
		cout<<"(";
		op(arr,i,s[i][j]);
		op(arr,s[i][j]+1,j);
			cout<<")";
	}
}
int Matrix_cahin_multi(int arr[],int n){
int min[n][n];
int j ,q;
for(int i=1;i<n;i++){
	min[i][i]=0;
}
for(int l=2;l<n;l++){
	for(int i=1;i<n-l+1;i++){
		j=i+l-1;
		min[i][j]=99999999;
		for(int  k=i;k<=j-1;k++){
			q=min[i][k]+min[k+1][j]+arr[i-1]*arr[k]*arr[j];
			if(q<min[i][j]){
				min[i][j]=q;
				s[i][k]=k;
			}
		}
	}

}
op(arr, 1, 6);	
return min[1][n-1];


}


int main(){
	int arr[]={3,4,5,6,7,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"optimal cost :" <<Matrix_cahin_multi(arr,size);
    return 0;
}
