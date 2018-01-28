#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstring>
#include<conio.h>
#include<time.h>
using namespace std;
int score1,score2;
string player1,player2;
void setup()
{
	cout<<setw(47);cout<<"SNAKE LADDER GAME\n";
	cout<<setw(30);
	for(int i=0;i<17;i++)
	cout<<"=";cout<<"\n\n\n\n";
	cout<<"enter name of player1 : ";cin>>player1;
	cout<<"\nenter name of player2 : ";cin>>player2;
}
void draw()
{
	system("cls");
	cout<<setw(44)<<"SNAKE POSITION\n";
	cout<<setw(30);
	for(int i=0;i<14;i++)
	cout<<"=";cout<<"\n\n";
	cout<<"from 98 to 28\n";
	cout<<"from 95 to 24\n";
	cout<<"from 92 to 51\n";
	cout<<"from 83 to 19\n";
	cout<<"from 73 to 1\n";
	cout<<"from 69 to 33\n";
	cout<<"from 64 to 36\n";
	cout<<"from 59 to 17\n";
	cout<<"from 55 to 7\n";
	cout<<"from 52 to 11\n";
	cout<<"from 48 to 9\n";
	cout<<"from 46 to 5\n";
	cout<<"from 44 to 22\n\n";
	cout<<setw(45)<<"LADDER POSITION\n";
	cout<<setw(30);
	for(int i=0;i<15;i++)
	cout<<"=";cout<<"\n\n";
	cout<<"from 8 to 26\n";
	cout<<"from 21 to 82\n";
	cout<<"from 43 to 77\n";
	cout<<"from 50 to 91\n";
	cout<<"from 62 to 96\n";
	cout<<"from 66 to 87\n";
	cout<<"from 80 to 100\n\n";
	cout<<setw(41)<<"GAME STATUS\n";
	cout<<setw(30);
	for(int i=0;i<11;i++)
	cout<<"=";cout<<"\n\n";
	cout<<player1<<" is at position "<<score1<<endl;
	cout<<player2<<" is at position "<<score2<<endl;
}
void input()
{
	cout<<endl<<endl;
	srand(time(NULL));
	int k1,k2,n1,n2;
	cout<<player1<<"--> press a key ";cin>>n1;
	k1=rand()%6+1;
	score1+=k1;
	cout<<"You got "<<k1<<" points !! Now you re at position "<<score1<<endl;
	cout<<player2<<"--> press a key ";cin>>n2;
	k2=rand()%6+1;
	score2+=k2;
	cout<<"You got "<<k2<<" points !! Now you re at position "<<score2<<endl<<endl;
	system("pause");
}
void logic()
{
	if(score1==98||score2==98)
	score1==98?score1=28:score2=28;
	if(score1==95||score2==95)
	score1==95?score1=24:score2=24;
	if(score1==92||score2==92)
	score1==92?score1=51:score2=51;
	if(score1==83||score2==83)
	score1==83?score1=19:score2=19;
	if(score1==73||score2==73)
	score1==73?score1=1:score2=1;
	if(score1==69||score2==69)
	score1==69?score1=33:score2=33;
	if(score1==64||score2==64)
	score1==64?score1=36:score2=36;
	if(score1==59||score2==59)
	score1==59?score1=17:score2=17;
	if(score1==55||score2==55)
	score1==55?score1=7:score2=7;
	if(score1==52||score2==52)
	score1==52?score1=11:score2=11;
	if(score1==48||score2==48)
	score1==48?score1=9:score2=9;
	if(score1==46||score2==46)
	score1==46?score1=5:score2=5;
	if(score1==44||score2==44)
	score1==44?score1=22:score2=22;
	
	if(score1==8||score2==8)
	score1==8?score1=26:score2=26;
	if(score1==21||score2==21)
	score1==21?score1=82:score2=82;
	if(score1==43||score2==43)
	score1==43?score1=77:score2=277;
	if(score1==50||score2==50)
	score1==50?score1=91:score2=91;
	if(score1==62||score2==62)
	score1==62?score1=96:score2=96;
	if(score1==66||score2==66)
	score1==66?score1=87:score2=87;
	if(score1==80||score2==80)
	score1==80?score1=100:score2=100;
}
int main()
{
	setup();
    while(score1<=100&&score2<100)
	{
		draw();
		input();
		logic();
	}
}
