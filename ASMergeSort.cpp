#include<iostream>
using namespace std;
struct student{
	char name[10];
	int id;
	int marks;
};
void merge(student arr[],int lb,int ub,int mid){
	int i=lb;
	 int j=mid+1;
	  int k=lb;
	  student b[50];

	while(i<=mid&&j<=ub){
		if(arr[i].marks<arr[j].marks){
			b[k]=arr[i];
			i++;
			k++;
		}
		else{
			b[k]=arr[j];
			j++;
			k++;
		}
	}

		while(i<=mid){
			b[k]=arr[i];
			i++;
			k++;
		}
		
		
	   	while(j<=ub){
			b[k]=arr[j];
		    j++;
			k++;
	    	}

	    for(int i=lb;i<k;i++){
	    	arr[i]=b[i];
		}
}
void merge_sort(student arr[],int lb, int ub){
     	if(lb<ub){
	   int mid;
	    mid=(lb+ub)/2;
	    merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
   	    merge(arr,lb,ub,mid);
	}
}
int main(){
		int n;cout<<"Enter number of student :";
   cin>>n;
 	student a[n];
  
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter your Name:  ";
		cin>>a[i].name;
		cout<<"Enter your id:  ";
	   	cin>>a[i].id;
	   	cout<<"Enter your Marks:  ";
		cin>>a[i].marks;
		cout<<endl;
	}	
	cout<<endl<<endl;
	cout<<"Before sorting:"<<endl;
	cout<<"********************************************************************************************"<<endl;
        cout<<"Name"<<"                        "<<"id"<<"                  "<<"Marks"<<endl<<endl;
    cout<<"********************************************************************************************"<<endl;
    for(int i=0;i<n;i++){
		cout<<a[i].name<<"                      "<<a[i].id<<"                  "<<a[i].marks<<endl;
	}
	
	merge_sort(a,0,n-1);
	
	cout<<endl<<endl;
	cout<<"After sorting:"<<endl;
	cout<<"**********************************************************************************************"<<endl;
     	cout<<"Name"<<"                      "<<"id"<<"                "<<"Marks"<<endl<<endl;
    cout<<"********************************************************************************************"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i].name<<"                   "<<a[i].id<<"               "<<a[i].marks<<endl;
	}	

	return 0;
}
