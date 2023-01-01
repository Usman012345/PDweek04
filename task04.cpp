#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
void playermove(int x,int y);
 main()
{
  int x,y;
  x=3;
  y=3;
  system("cls");
  maze();
  while(true)
  {
      playermove(x,y);
      if(x<20)
     {
          x=x+1;
          Sleep(200);
     }
     if(x==20)
    {
         gotoxy(x-1,y);
         cout<<" ";
         x=3;
    }

  }
}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),  coordinates);
}
void playermove(int x,int y)
{
 gotoxy(x-1,y);
 cout<<" ";
 gotoxy(x,y);
 cout<<"p";
 Sleep(200);
 }
void maze()
{
 cout<<"###################################"<<endl;
 cout<<"#				  #"<<endl;
 cout<<"#				  #"<<endl;
 cout<<"#				  #"<<endl;
 cout<<"#				  #"<<endl;
 cout<<"#				  #"<<endl;
 cout<<"#				  #"<<endl;
 cout<<"#				  #"<<endl;
 cout<<"#				  #"<<endl;
 cout<<"###################################"<<endl;
}