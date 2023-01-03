#include<iostream>
#include <windows.h>
using namespace std;

void printMenu();
void Aggregate(float, float, float,string);
void Aggregate2(float, float, float,string);
void compare(int, int, string, string);

main()
{
    while(true)
    {
    system("cls");
    int input;
    string name1,name2; 
    float matricmarks1,matricmarks2;
    float intermarks1,intermarks2; 
    float ecatmarks1;
    float ecatmarks2;

     printMenu();
          cin >> input;

  
       

        if(input == 1)
        {
            cout<<"Enter your name: ";
            cin >> name1;
            cout<<name1 <<" ,Enter your matric marks: ";
            cin >> matricmarks1;
            cout<<name1 <<" ,Enter your intermediate marks: ";
            cin >> intermarks1;
            cout<<name1 <<" ,Enter your ECAT marks: ";
            cin >> ecatmarks1;
        }
        if(input == 2)
        {
            cout<<"Enter your name: ";
            cin >> name2;
            cout<<name2 <<" ,Enter your matric marks: ";
            cin >> matricmarks2;
            cout<<name2 <<" ,Enter your intermediate marks: ";
            cin >> intermarks2;
            cout<<name2 <<" ,Enter your ECAT marks: ";
            cin >> ecatmarks2;
        }
        if(input == 3)
        {
            Aggregate(matricmarks1, intermarks1, ecatmarks1,name1);
        }
        if(input == 4)
        {
            Aggregate2(matricmarks2, intermarks2, ecatmarks2,name2);
        }
        if(input == 5)
        {
              compare(ecatmarks1,ecatmarks2,name1,name2);
        }
    }
}


void printMenu()
{
    cout<<"******************************************************"<<endl;
    cout<<"*                                                    *"<<endl;
    cout<<"*                University of Engineering           *"<<endl;
    cout<<"*                     and Technology                 *"<<endl;
    cout<<"*                                                    *"<<endl;
    cout<<"*                                                    *"<<endl;
    cout<<"******************************************************"<<endl<<endl;
    cout<<"Welcome to UET Lahore"<<endl;
    cout<<"Press 1 to enter details of first student"<<endl;
    cout<<"Press 2 to enter details of second student"<<endl;
    cout<<"Press 3 to show aggregate of first student"<<endl;
    cout<<"Press 4 to show aggregate of second student"<<endl;
    cout<<"Press 5 to compare students aggregate"<<endl;    
}

void Aggregate(float matricmarks, float intermarks, float ecatmarks,string name1)
{
    float aggregate;
    aggregate = 30*matricmarks/1100 + 40*intermarks/550 + 30*ecatmarks/400;
    cout<<name1 <<"  ,your aggregate is: " << aggregate<<endl;
    system("pause");
}
void Aggregate2(float matricmarks, float intermarks, float ecatmarks,string name2)
{  
 float aggregate;
    aggregate = (((matricmarks/1100)*0.3) + ((intermarks/1100)*0.4) + ((ecatmarks/400)*0.3))*100;
    cout<<name2 <<" ,your aggregate is: " << aggregate<<endl;
    system("pause");
}

void compare(int ecatmarks1,int ecatmarks2,string name1,string name2)
{
 if( ecatmarks1>ecatmarks2)
 {
  
   cout<<name1 <<" ,your roll no. is 1. ";
 }
if(ecatmarks1<ecatmarks2)
{ 
  
   cout<<name2 <<" ,your roll no. is 1. ";
}

}