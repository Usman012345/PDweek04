#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
 main()
{
 maze();
 gotoxy(20,7);
 cout<<"p";
}
void gotoxy(int x,int y)
{
 COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),  coordinates);
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