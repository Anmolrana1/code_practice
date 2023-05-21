#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void IsDivisible(string num){
	int lastD=num[num.size()-1]-'0';int left=0;
	for(int i=0;i<num.size()-1;i++){
		int a=num[i]-'0';
		left=left*10+a;
	}
	if((left-lastD*2)%7==0){
		cout<<"dividble";
	}
	else{
		cout<<"not";
	}
}
int main(){  
   
    IsDivisible("8955795758");
	return 0;
}

