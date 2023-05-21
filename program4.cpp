#include<iostream>
#include <fstream>
#include<string>
using namespace std;
struct stu{
	char name[10];
	int r;
};
class student{
   public:stu s;
	void get(){
		
   	
	cout<<"enter a name: ";
	cin>>s.name;
	cout<<"enter a no: ";
	cin>>s.r;

}
		void show(){
			
		for(int i=0;i<=1;i++){
	cout<<"name "<<s.name<<"                 r "<<s.r<<endl;
}
}
};		

void write(){
  student st;
  ofstream file;
  for(int i=0;i<=1;i++){
  file.open("student.dat");
  
  st.get();  
  file.write((char*)&st,sizeof(st));
  }

  
 file.close();
}
void read(){
	student st;
	ifstream file ;
	file.open("student.dat");
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
