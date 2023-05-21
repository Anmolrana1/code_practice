#include<iostream>
#include<list>
#include <iterator>
using namespace std;
int main(){
	list<int>l={4,5,6,l2};
	for(int i=1;i<=5;i++){
		l.push_back(i*2);
		l2.push_front(i*4);
	}
	l.push_front(100);

	 for(auto i=l.begin();i !=l.end();i++){  ///cr.begin()
	 	cout<<*i<<" ";
}
cout<<endl;

 l2.push_back(200);
 for(auto i=l2.begin();i !=l2.end();i++){  ///cr.begin()
	 	cout<<*i<<" ";
}
	 return 0;
}
