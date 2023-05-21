#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void romanToDecimal(string s){
	int output=0;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]=='I'){
			output=output+1;
		}
		else if(s[i]=='V'){
			output=output+5;
		}
		else if(s[i]=='X'){
			output=output+10;
		}
		else if(s[i]=='L'){
			output=output+50;
		}
		else if(s[i]=='C'){
			output=output+100;
		}
		else if(s[i]=='D'){
			output=output+500;
		}
		else if(s[i]=='M'){
			output=output+1000;
		}	
	}
	cout<<output;
}
int main(){  
    string roman;
    cout<<"enter a roman number:";
    cin>>roman;
    romanToDecimal(roman);
	return 0;
}



