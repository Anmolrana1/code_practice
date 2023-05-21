#include<fstream>
#include<iostream>
using namespace std;
    struct stu{
	int rollno;
	char name[10];
	float percentage;
	
};
class student{
	
	public:
	    stu t[3];
		 char name[10];
          void get(){
        	for(int i=0;i<3;i++){
		cout<<"enter a name: ";
		cin>>t[i].name;
		cout<<"enter roll no: ";
		cin>>t[i].rollno;
		cout<<"enter percentage: ";
		cin>>t[i].percentage;
	}
		  }
		  void show(){
        for(int i=0;i<3;i++){
        	char a;
        	
        	if(t[i].percentage>=50){
        		a='p';
			}
			else{
				a='f';
			}
		cout<<t[i].name<<"           |   "<<t[i].rollno<<"         |   "<<a<<endl;
	}
	
		  }
};
void write(){
  student st;
  ofstream file;
  file.open("stu.dat",ios::in);
  st.get();
  file.write((char*)&st,sizeof(st));

file.close();
}
void read(){
	system("cls");
	cout<<"            result"<<endl<<endl;
	cout<<" name: "<<"       "<<" rollno: "<<"       "<<" result"<<endl;
	student st;
	ifstream file ;
	file.open("stu.dat");
	file.read((char *)&st ,sizeof(st));	
	while(!file.eof()){
		st.show();
		file.read((char *)&st ,sizeof(st));	
	}
	file.close();
}
int main(){
	write();
	read();
		return 0;
}


	

	
