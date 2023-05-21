#include<iostream>
#include<fstream>
using namespace std;
class bank{
    char name[10];
	int opening_balance;
	public:
	    int pin;
		int deposit_amount;
		int withdrwal_amount;
	    int acc;
		void display();
	    void withdrawl(); 
		void Deposit();
		void check_Account();
		void Make_Account();
};
/*****************************display()****************************************/
void bank::display(){
    cout<<"\t\t\tSBI BANK";
    cout<<"\n\t\t   ********************\n\n\n";
}
/*************************************************************************************/
/*****************************Make_Account()****************************************/
void bank::Make_Account(){
	cout<<"\nEnter your name:";
	cin>>name;
	cout<<"\nEnter your account number:";
	cin>>acc;
	cout<<"\nEnter your opening balance:";
	cin>>opening_balance;
	cout<<"\nEnter your 4-digit pin:";
	cin>>pin;
	cout<<"\n    THANK YOU FOR USIN SBI SERVICE";
}
void Account_details() {
	bank b;
	ofstream file;
	file.open("anmol.dat");
	b.Make_Account();
	file.write((char *)&b,sizeof(b));
	file.close();
	}
/**********************************************************************************/
/******************************check Account()************************************/
void bank::check_Account(){
	cout<<"\n\nName of account holder:"<<name;
	cout<<"\n\nAccount number:"<<acc;
	cout<<"\n\nBalance:"<<opening_balance;
}
void show_account(){
	bank b;
	ifstream file("anmol.dat");
	int account_no; 
	cout<<"Enter account number:";
	cin>>account_no;
	file.read((char *)&b ,sizeof(b));
	while(!file.eof()){
		if(b.acc==account_no){
	    b.check_Account();
		}	
		else{
			cout<<"\n\n****please enter your correct acount no****";
		}
		file.read((char *)&b ,sizeof(b));	
}
	file.close();
}
/**********************************************************************************/
/******************************deposit Account()************************************/
void deposit_account(){
	bank b;
	ifstream file("anmol.dat");
	int pin; 
	cout<<"Enter  your 4-digit pin:";
	cin>>pin;
	file.read((char *)&b ,sizeof(b));
	while(!file.eof()){
		if(b.pin==pin){
	    b.Deposit();
		}	
		else{
			cout<<"\n\n******please enter your correct pin***";
		}
		file.read((char *)&b ,sizeof(b));	
}
	file.close();
}
void bank::Deposit(){
	cout<<"\n\nEnter the amount you want to deposit:";
	cin>>deposit_amount;
	cout<<"\n\nName of account holder:"<<name;
	cout<<"\n\nAccount number:"<<acc;
	opening_balance=opening_balance+deposit_amount;
	cout<<"\n\nBalance:"<<opening_balance;
}

/**********************************************************************************/
/******************************withdrawal Account()************************************/

void withdrwal_account(){
	bank b;
	ifstream file("anmol.dat");
	int pin; 
	cout<<"Enter  your 4-digit pin:";
	cin>>pin;
	
	file.read((char *)&b ,sizeof(b));
	while(!file.eof()){
		if(b.pin==pin){
	    b.withdrawl();
		}	
		else{
			cout<<"\n\n****please enter your correct pin****";
		}
		file.read((char *)&b ,sizeof(b));	
}
	file.close();
}
void bank::withdrawl(){
	
	cout<<"\n\nEnter the amount you want to withdrwal:";
	cin>>withdrwal_amount;
	cout<<"\n\nName of account holder:"<<name;
	cout<<"\n\nAccount number:"<<acc;
	opening_balance=opening_balance-withdrwal_amount;
	cout<<"\n\nBalance:"<<opening_balance-withdrwal_amount;
}
/**********************************************************************************/

int main(){ 
     bank b;int retun;
    do{
    system("cls");
	 b.display();
    string a[5]={"withdrawl","Deposit","check Account","Make Account","exist"};
    cout<<"\t1."<<a[0]<<"\t\t\t2."<<a[1]<<endl<<endl;
    cout<<"\n\n\n\t3."<<a[2]<<"\t\t\t4."<<a[3]<<endl;
    cout<<"\n\n\n\t\t\t   5."<<a[4]<<endl;
    int choose;
    cout<<"Choose a option:";
    cin>>choose;
    system("cls");
    if(choose==4){
    	b.display();
    	cout<<"MAKE YOUR ACCOUNT HERE-:";
		cout<<"\n**************************\n\n";
    	Account_details();
    	cout<<"\n\nIf you want to return press 1:";
    	cin>>retun;
	}
	else if(choose==3){
    	b.display();
    	cout<<"MAKE YOUR ACCOUNT HERE-:";
		cout<<"\n**************************\n\n";
    	show_account();
    	cout<<"\n\nIf you want to return press 1:";
    	cin>>retun;
	}
	else if(choose==2){
    	b.display();
    	cout<<"MAKE YOUR ACCOUNT HERE-:";
		cout<<"\n**************************\n\n";
    	deposit_account();
    	cout<<"\n\nIf you want to return press 1:";
    	cin>>retun;
	}
	else if(choose==1){
    	b.display();
    	cout<<"MAKE YOUR ACCOUNT HERE-:";
		cout<<"\n**************************\n\n";
    	withdrwal_account();
    	cout<<"\n\nIf you want to return press 1:";
    	cin>>retun;
	}else if(choose==5){
    	b.display();
    	cout<<"MAKE YOUR ACCOUNT HERE-:";
		cout<<"\n**************************\n\n";
    	show_account();
    
	}
}while(retun==1);
    return 0;
}
