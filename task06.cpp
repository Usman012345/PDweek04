#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void A();
void W();
void I();
void S();
 main()
{
system("cls");
gotoxy(0,0);
 A();
gotoxy(0,9);
 W();
gotoxy(0,18);
 A();
gotoxy(0,27);
 I();
gotoxy(0,36);
 S();
}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),  coordinates);
}
void A()
{
 cout<<"                            *                                    "<<endl;
 cout<<"                          *   *                                  "<<endl;
 cout<<"                         *      *                                "<<endl;
 cout<<"                       *         *                               "<<endl;
 cout<<"                       **********                             "<<endl;
 cout<<"                     *              *                            "<<endl;
 cout<<"                    *                 *                          "<<endl;
 cout<<"                   *                    *                        "<<endl;
 cout<<"                  *                      *                       "<<endl<<endl;
}
void W()
{
 cout<<"     *                  *                      *                 "<<endl;   
 cout<<"      *               *   *                   *                  "<<endl;
 cout<<"       *             *      *                *                   "<<endl;
 cout<<"        *           *          *            *                    "<<endl;
 cout<<"         *         *              *        *                     "<<endl;
 cout<<"           *      *                  *    *                      "<<endl;
 cout<<"             *  *                      * *                       "<<endl;
 cout<<"               *                         *                        "<<endl<<endl;
}
void I()
{
 cout<<"                       *****                                     "<<endl;
 cout<<"                         **                                       "<<endl;
 cout<<"                         **                                       "<<endl;
 cout<<"                         **                                       "<<endl;
 cout<<"                         **                                       "<<endl;
 cout<<"                         **                                       "<<endl;
 cout<<"                         **                                       "<<endl;
 cout<<"                         **                                       "<<endl;
 cout<<"                       *****                                     "<<endl <<endl;
}
void S()
{
 cout<<"                     ** **                                       "<<endl;    
 cout<<"                 **         **                                   "<<endl;
 cout<<"                    **                                            "<<endl;
 cout<<"                       **                                         "<<endl;
 cout<<"                          **                                      "<<endl;
 cout<<"                              **                                  "<<endl;
 cout<<"                                 **                               "<<endl;   
 cout<<"                     **        **                                "<<endl;	
 cout<<"                         ** **                                   "<<endl;
}
