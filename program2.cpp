#include<iostream>
using namespace std;

int main(){
	cout<<"         "<<"calculater"<<endl;
	cout<<"         "<<endl;
	char a='y',b,c;
	float n1,n2,n3;float re;
    while(a=='y'){
	cout<<"Enter a number:"<<endl;
	cin>>n1;
	cout<<"Enter a number:"<<endl;
	cin>>n2;
	cout<<"Enter expression:"<<endl;
	cin>>b;
	switch(b){
		case '*':
			cout<<"n1*n2  =  "<<n1*n2<<endl;
			re=n1*n2;
			break;
		case '-':
			cout<<"n1-n2  =  "<<n1-n2<<endl;
			re=n1-n2;
				break;
		case '/':
			cout<<"n1/n2  =  "<<n1/n2<<endl;
			re=n1/n2;
				break;
		case '+':
			cout<<"n1+n2  =  "<<n1+n2<<endl;
			re=n1+n2;
				break;
	}

	
	cout<<"you want to continue this expression y/n :"<<endl;
	cin>>c;

	
	while(a=='y'){
	cout<<"Enter a number:"<<endl;
	cin>>n3;
	cout<<"Enter expression:"<<endl;
	cin>>b;
	switch(b){
		case '*':
			cout<<"re*n3  =  "<<re*n3<<endl;
			re=re*n3;
			break;
		case '-':
			cout<<"re-n3  =  "<<re-n3<<endl;
			re=re-n3;
				break;
		case '/':
			cout<<"re/n3  =  "<<re/n3<<endl;
			re=re/n3;
				break;
		case '+':
			cout<<"re+n3  =  "<<re+n3<<endl;
			re=re+n3;
				break;
	}
	cout<<"you want to continue this expression y/n :"<<endl;
	cin>>a;
}
cout<<"you want to continue y/n :"<<endl;
	cin>>a;
}
return 0;}
