#include<iostream>
using namespace std;
void reverse(string);
int main(){
	string str;
	cout<<"Enter a sentance :";
	getline(cin,str);
	reverse(str);
	
	return 0;
} 
void reverse(string str ){
	int numofchars=str.size();
	if(numofchars==1)
	cout<<str<<endl;
	else 
	cout<<str[numofchars-1];
	reverse(str.substr(0,numofchars-1)); 
	}
