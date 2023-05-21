#include<iostream>
using namespace std;
	int c[10][10];char s[10][10]={0};
	
	
int printcs(char x[],int i,int j){
	
	
	if(i==0||j==0){
		return 0;}
	if(s[i][j]='X'){
		printcs(x,i-1,j-1);
		cout<<x[i]<<" ";
	}
	else if(s[i][j]=='v'){
		printcs(x,i,j-1);
	}
	else{
	    printcs(x,i-1,j);
	}
}
void LSC(char x[],char y[],int m,int n){
	
	int c[m][n];char s[m][n]={0};
	for(int i=0;i<m;i++){
		c[i][0]=0;
	}
	for(int i=0;i<n;i++){
		c[0][i]=0;
	}
	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			if(x[i]==x[j]){
				c[i][j]=c[i-1][j-1]+1;
				s[i][j]='Z';
			}
			else if(c[i][j-1]>=c[i-1][j]){
				c[i][j]=c[i][j-1];
				s[i][j]='X';
			}
		else{
				c[i][j]=c[i-1][j];
				s[i][j]='V';
			}
		}
	}
	printcs(x,m,n);
}

int main(){
	  char x[]="zabcbdab";
	  char y[]="zbdcaba";
	  int m=sizeof(x);
	int n=sizeof(y);
	  LSC(x,y,m,n);
	  return 0;
	  
}
