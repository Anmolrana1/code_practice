 #include<iostream>
using namespace std;
struct student{
	char name[10];
	int id;
	int marks;
};
void swap(student arr[],int i,int j ){
	student temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int  partion(student arr[],int lb,int ub){
	int start=lb;
	int pivot=arr[lb].marks;
	int end=ub;
	while(start<end){
	  while(arr[start].marks<=pivot){
	       start++;
	  }

		while(arr[end].marks>pivot){
	        end--;
		}
		
		if(start<end){
		  swap(arr,start,end);
		}
    }
	if(start>end){
	swap(arr,lb,end);
	}
	return end;
	

}
void  quikShort(student arr[],int lb, int ub){
     	if(lb<ub){
     		int loc;
	  loc=partion(arr,lb,ub);
	    quikShort(arr,lb,loc);
        quikShort (arr,loc+1,ub);
   	   
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
	
	quikShort(a,0,n-1);
	
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
    
	
	
