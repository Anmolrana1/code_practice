#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int>v={1,2,3,4,5};
	v.push_back(10);
	cout<<"vector:";
	for(int &x:v)cout<<x<<"  ";
		cout<<"\nvector after shorting:";
	sort(v.begin(),v.end());
		for(int &x:v)cout<<x<<"  ";
		cout<<"\nvector after reversing:";
        reverse(v.begin(),v.end());
		for(int &x:v)cout<<x<<"  ";
		cout<<"size of vector:"<<v.size();
	return 0;
}
