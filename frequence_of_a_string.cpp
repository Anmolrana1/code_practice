#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void swap(string a,int i, int j){
	char temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

int main(){
	string str="fuhpqnhfjnbvygvrqirlkbbbaa";
	int fre[26];
	for(int i=0;i<26;i++){
		fre[i]=0;
	}
	for(int i=0;i<str.size();i++){
		fre[str[i]-'a']++;
	}
    for(int i=0;i<26;i++){
	    cout<<fre[i]<<"  ";
	}
	int max=0;
	char chara;
    for(int i=0;i<26;i++){
	    if(fre[i]>max){
	   	    max=fre[i];
	   	    chara=i+'a';
	   	    
	   }
	}
    cout<<endl<<max<<" -> "<<chara;
	return 0;
}



