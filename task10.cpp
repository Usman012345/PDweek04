#include<iostream>
#include<windows.h>
using namespace std;
void price();
main()
{
  while(true)
   {
      price();
   }
}
void price()
{
 string name;
 int price,Final_price,pakistan,ireland,india,england,canada;
 cout<<"Enter country name: ";
 cin>> name;
 cout<<"Enter ticket price in dollars : ";
 cin>>price;
 pakistan=5*price/100;
 ireland=10*price/100;
 india=20*price/100;
 england=30*price/100;
 canada=45*price/100;
 if(name=="pakistan")
  {
     Final_price=price - pakistan;
     cout<<"Final price is " <<Final_price <<endl;
  }
 if(name=="ireland")
  {
     Final_price=price - ireland;
     cout<<"Final price is "<<Final_price <<endl;
  }
 if(name=="india")
  {
     Final_price=price - india;
     cout<<"Final price is "<<Final_price <<endl;  
  }
 if(name=="england")
  {
     Final_price=price - england;
     cout<<"Final price is "<<Final_price <<endl;
  }
 if(name=="canada")
  {
     Final_price=price - canada;
     cout<<"Final price is "<<Final_price <<endl;
  }
}
