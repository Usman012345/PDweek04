#include<iostream>
#include<windows.h>
using namespace std;
void integers();
main()
{
  integers();
}
void integers()
{
 int x,y;
 cout<<"Enter digit 1: ";
 cin>> x;
 cout<<"Enter digit 2: ";
 cin>> y;
 if(x == y)
 {
   cout<<x <<" is equal to " <<y <<"true";
 }
 if(x!=y)
 {
   cout<<x <<" is equal to " <<y <<" (false)";
 }
}
