#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<time.h>
using namespace std;
const int max_count=5;
int n,size=0,count,key,score;
bool gameover;
struct WORDS
{
	char name[20];
	int flag[20];
}words[5];
void setup()
{
	gameover=false;
	for(int i=0;i<5;i++)
	{
		char names[20];cout<<"enter name : ";cin>>names;
		for(int j=0;j<20;j++)
		{
			words[i].name[j]=names[j];
			words[i].flag[j]=0;
		}
	}
	cout<<"press a key : ";
	cin>>key;
	srand(time(NULL));
	key=rand()%5;
	cout<<"key = "<<key;
	//system("pause");
	size=strlen(words[key].name);

}
void logic(char ch)
{
	int j;
	for(j=0;j<size;j++)
	{
		if(words[key].name[j]==ch&&words[key].flag[j]==0)
		{
			words[key].flag[j]=1;score++;
			break;
		}
	}
	if(j==size)
	{
		count++;
		cout<<"unsuccesfull atempt!!\n";
	}
	if(count>=max_count)
	gameover==true;
	if(score==size)
	{
		cout<<"congrats!!\n";
		exit(0);
	}
}
void input()
{
	char c;
	cout<<"enter character present in word : ";cin>>c;
	logic(c);
}

void draw()
{
	system("cls");
	cout<<"word has "<<size<<" albhabets\n\n";
	input();
	cout<<setw(30);
	for(int j=0;j<size;j++)
	{
		if(words[key].flag[j]==0)
		cout<<" ";
		else
		cout<<words[key].name[j];
	}
	cout<<endl;
	cout<<setw(30);
	for(int j=0;j<size;j++)
	cout<<"=";cout<<endl<<endl;
	cout<<"score = "<<score<<endl;
}

int main()
{
	setup();
//	while(!gameover)

		
		draw();
}
