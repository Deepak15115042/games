#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include<unistd.h>
using namespace std;
bool gameover;
const int width=20;
const int height=20;
int x,y,fx,fy,score;
int tailx[100],taily[100];
int tail=0;
enum edirection{Stop=0,Left,Right,Up,Down};
edirection dir;
void setup()
{
    gameover=false;
    dir=Up;
    x=width/2;y=height/2;
    fx=rand()%width;fy=rand()%height;
    score=0;
}
void draw()
{
	system("cls");
	for(int i=0;i<width+1;i++)
	cout<<"#";
	cout<<endl;
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<width;j++)
		{
			if(j==0)
			cout<<"#";
			else if(j==x&&i==y)
			cout<<"0";
			else if(j==fx&&i==fy)
			cout<<"F";
			else
			{
				bool print=false;
			    for(int k=0;k<tail;k++)
			    {
				   if(j==tailx[k]&&i==taily[k])
				   {
					  cout<<"o";
					  print=true;
				   }
			    }
			    if(!print)
			    cout<<" ";
		    }
		    if(j==width-1)
			cout<<"#";
		}
		cout<<endl;
	}
	for(int i=0;i<width+1;i++)
	cout<<"#";cout<<endl;
	cout<<"score = "<<score<<endl;
	
}
void input()
{
    if(_kbhit())
	{
		switch(_getch())
		{
			case 'w':dir=Up;break;
			case 'a':dir=Left;break;
			case 'd':dir=Right;break;
			case 's':dir=Down;break;
			case 'x':gameover=true;break;
		}
	}	
}
void logic()
{
	int prevx=tailx[0];
	int prevy=taily[0];
	int prev2x,prev2y;
	tailx[0]=x;
	taily[0]=y;
	for(int k=1;k<tail;k++)
	{
		prev2x=tailx[k];
		prev2y=taily[k];
		tailx[k]=prevx;
		taily[k]=prevy;
		prevx=prev2x;
		prevy=prev2y;
	}
	switch(dir)
	{
		case Up:
			y--;
			break;
		case Left:
			x--;
			break;
		case Right:
			x++;
			break;
		case Down:
			y++;
			break;
		default:break;
	}
	if(x>width||x<0||y>height||y<0)
	{
		gameover=true;
	}
	for(int i=0;i<tail;i++)
	{
		if(tailx[i]==x&&taily[i]==y)
		gameover=true;
	}
    if(x==fx&&y==fy)
	{
		score++;
	    fx=rand()%width;
        fy=rand()%height;
        tail++;
	}
}

int main()
{
	setup();
	while(!gameover)
	{
		draw();
		input();
		logic();
	    sleep(1);
	}
}
