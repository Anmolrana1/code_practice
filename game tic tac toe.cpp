#include <iostream>
using namespace std;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
int main(){
	
	int player=1,i,choce;
	char mark;
	do{
		board();
		player=(player%2)?1:2;
		cout<<"player"<<player<<"enter a number :";
		cin>>choce;
		mark=(player==1)?'x':'0';
		 if(choce==1 && square[1]=='1')
		square[1]=mark;
			else if(choce==2 && square[3]=='3')
		square[3]=mark;
			else if(choce==4 && square[4]=='4')
		square[4]=mark;
			else if(choce==5 && square[5]=='5')
		square[5]=mark;
			else if(choce==6 && square[6]=='6')
		square[6]=mark;
			else if(choce==7 && square[7]=='7')
		square[7]=mark;
			else if(choce==8 && square[8]=='8')
		square[8]=mark;
			else if(choce==9 && square[9]=='9')
		square[9]=mark;
			else {
				cout<<"invalid move!!";
				player--;
				cin.ignore();
				cin.get();}
				i=checkwin();
				player++;
			}while(i==-1);
			board();
			if(i==1)
			cout<<"==>\aplayer"<<--player<<"win";
			else
			cout<<"==>\agame draw";
			cin.ignore();
			cin.get();
			return 0;
			}
	/**************************************************************************************************************/
	int checkwin(){
	   if(square[1]==square[2] && square[2]==square[3])
		return 1;
		 else	if(square[4]==square[5] && square[5]==square[6])
		return 1;
		 else	if(square[7]==square[8] && square[8]==square[9])
		return 1;
		 else	if(square[1]==square[4] && square[4]==square[7])
		return 1;
		 else	if(square[2]==square[5] && square[5]==square[8])
		return 1;
		 else	if(square[3]==square[6] && square[6]==square[9])
		return 1;
		 else	if(square[1]==square[5] && square[5]==square[9])
		return 1;
		 else	if(square[3]==square[5] && square[5]==square[7])
		return 1;
		 else	if(square[1]!='1' && square[2]!='2' && square[3]!='3'&&  square[4]!='4'&& square[5]!='5'&& square[6]!='6'&& 
		  square[7]!='7' && square[8]!='8'&& square[9]!='9')
		  return 0;
		  else
		  return -1;
	}
	void board(){
		system("cls");
		cout<<"\n\n\\\tic tac toe\\\n\n";
		cout<<"player 1 (x) - player 2 (0)"<<endl<<endl;
		cout<<endl;
		cout<<"     |       |      "<<endl;
		cout<<" "<<square[1]<<" | "<<" "<<" | "<<square[2]<<" | "<<" "<<" "<<square[3]<<endl; 
		
		cout<<" ____|_______|______"<<endl;
		
		cout<<"     |       |      "<<endl;
		cout<<" "<<square[4]<<" | "<<" "<<" | "<<square[5]<<" | "<<" "<<" "<<square[6]<<endl;
		
	    cout<<" ____|_______|______"<<endl;
		cout<<"     |       |      "<<endl;
		
		cout<<" "<<square[7]<<" | "<<" "<<" | "<<square[8]<<" | "<<" "<<" "<<square[9]<<endl;
		cout<<"     |       |      "<<endl;
	}
	


