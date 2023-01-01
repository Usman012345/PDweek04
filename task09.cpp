#include<iostream>
#include<windows.h>
using namespace std;
void data();
main()
{
  data();
}
void data()
{
 string x,y;
 cout<<"Enter input 1: ";
 cin>> x;
 cout<<"Enter input 2: ";
 cin>> y;
 if(x == y)
 {
   cout<<x <<" = " <<y<<"False  ";
 }
 if(x!=y)
 {
   cout<<x <<" = " <<y <<"true";
 }
}
