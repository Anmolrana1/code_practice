#include<iostream>
using namespace std;
int main(){
	cout<<endl<<endl<<"       ************* Bank *****************"<<endl<<endl<<endl;
	cout<<"1-> open account                 2-> Deposit money"<<endl<<endl<<endl;
	cout<<"3-> check balance                4-> cash withdraw"<<endl<<endl;
	int ch;int money,deposit;
	char name[10];int pin;
	cout<<"Enter your choice = ";
	cin>>ch;
	if(ch==1){
		system("cls");
		cout<<endl<<endl<<"       ************* Bank *****************"<<endl<<endl<<endl;
		cout<<"Enter your name =";
		cin>>name;
		cout<<"Amount you want to deposit =";
		cin>>money;
		cout<<"Enter four digit pin =";
		cin>>pin;
	}
	if(ch==2){
		system("cls");
		cout<<endl<<endl<<"       ************* Bank *****************"<<endl<<endl<<endl;
		cout<<"Enter your name =";
		cin>>name;
		cout<<"Amount you want to deposit =";
		cin>>money;	
}
