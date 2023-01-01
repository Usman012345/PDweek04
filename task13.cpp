#include<iostream>
using namespace std;
main()
{
 int holidays,working_days,time,difference,difference_in_hours,mins;
 cout<<"Enter no of holidays ";
 cin>>holidays;
 working_days=365-holidays;
 time=working_days*63+holidays*127;
 if(time>30000)
  {
     cout<<"Tom runs away"<<endl;
     difference=time-30000;
     difference_in_hours=difference/60;
     mins=difference%60;
     cout<<"There are "<<difference_in_hours<<" hours and "<<mins<<" mins more from norm";  
  }
 if(time<30000)
  {
     cout<<"Toms gets enough sleep ";
     difference=30000-time;
     difference_in_hours=difference/60;
     mins=difference%60;
     cout<<"There are "<<difference_in_hours <<" hours and "<<mins << " mins less then norm";
  }
 if(time==30000)
  {
     cout<<"Tom gets enough sleep";
  }
}