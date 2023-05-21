#include<iostream>
using namespace std;
float fuc(float x,float y){
	return (x+y*y);
}
int main(){
  float x,y,h,k1,k2,k3,k4,z;
  cout<<"enter value of x: ";
  cin>>x;
  cout<<"enter value of y: ";
  cin>>y;
  cout<<"enter value of h: ";
  cin>>h;
  int i=0;
  while(i<=2){
  	k1=h*fuc(x,y);
  	k2=h*fuc(x+h/2,y+k1/2);
  	k3=h*fuc(x+h/2,y+k2/2);
  	k4=h*fuc(x+h,y+k3);
  	z=y+0.167*(k1+2*k2+2*k3+k4);
	  	x=x+h;
  
  	cout<<"value of x = "<<x<<" vlaue of z ="<<z<<endl;
  	y=z;
  	i++;
  
  }
  return 0;
  }
