 #include<iostream>
using namespace std;
int getMax(int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void CountingSort(int a[],int n,int k,int pos){

	int b[n],c[k]={0};

	for(int i=0;i<n;i++){
		c[(a[i]/pos)%10]=c[(a[i]/pos)%10]+1;
	}
	for(int i=1;i<=k;i++){
		c[i]=c[i]+c[i-1];
	}
	for(int i=n-1;i>=0;i--){
	   b[--c[(a[i]/pos)%10]]=a[i];
	   
	}
	for(int i=0;i<n;i++){
		a[i]=b[i];
	}
}
void Redix_sort(int a[],int n,int d){
	int max=getMax(a,n);
	int pos;
	for( pos=1; (max/pos)>0;pos*=10){
		CountingSort(a,n,d,pos);
	}
}

int main(){
	int a[8]={121,89,353,98,234,897,435,56};	
	int n=8;
	cout<<"Array before sorting:  ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
		}
		cout<<endl;

    Redix_sort( a,n, 9);
	cout<<"Array after sorting:  ";    
    for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
		}
	return 0;
}
    
	
	
