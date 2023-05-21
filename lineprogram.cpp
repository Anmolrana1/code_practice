#include<math.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream>
using namespace std;
void main(){
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cout<<"enter the value of x1,y1:";
	cin>>x1,y1;
		cout<<"enter the value of x1,y1:";
	cin>>x2,y2;
	dx=abs(x2-x1);
	dx=abs(y2-y1);
	if(dx>dy)
	    step=dx;
	    else
	    step=dy;
	    dx=dx/step;
	    dy=dy/step;
	    x=x1;
	    y=y1;
	    i=1;
	    while(i<=step){
	    	putpixel(x,y,5);
	    	x=x+dx;
	    	y=y+dx;
	    	i=i+1;
	    	delay(100);
		}
	    closegraph();
}
