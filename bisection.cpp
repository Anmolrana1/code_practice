#include<iostream>
using namespace std;
float fun(float x){
	return (x*x*x-4*x-9);
}
int main(){
	float a=2,f=0,b=0,d=0,c=0;
	while(f>=0){
		f=fun(a);
		a++;
	}
	a--;
	while(d<=0){
		d=fun(b);
		b++;
	}
	b--;
	int i=0;
	while(i<=20){
	  c=(a+b)/2;
	  f=fun(c);
	  if(f<0){
	  	a=c;
	  }
	  else{
	  	b=c;
	  }
	  cout<<c<<endl;
	  i++;
	}
    return 0;
}
