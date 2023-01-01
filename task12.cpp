#include<iostream>
using namespace std;
main()
{
 int discount,roses,white_roses,tulips,original_price,payable_price;
 cout<<"Enter no of roses ";
 cin>>roses;
 cout<<"Enter no of white roses ";
 cin>>white_roses;
 cout<<"Enter no of tulips ";
 cin>>tulips;
 original_price=roses*2+white_roses*4.10+tulips*2.50;
 if(original_price>200)
  {
   discount=20*original_price/100;
   payable_price=original_price-discount;
   cout<<"original price= "<<original_price<<endl;
   cout<<"The payable price= "<<payable_price<<endl; 
  }
 if(original_price<=200)
  {
 cout<<"The price is "<<original_price;
  }
}