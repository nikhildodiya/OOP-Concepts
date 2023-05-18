// WAP To Member Details using <ultiple inheritance

#include<iostream>
using namespace std; // Using Standard Output
class member // Class
{
    public:
        char name[20]; // Variable For Store Character Value
        int age; // // Variable For Store integer Value
        member()
        {
            // Pass The MSg TO Take User Input
            cout<<"Enter Member Name : ";
            cin>>name;
            cout<<"Enter Member Age : ";
            cin>>age;    
        }
};

class persantage // Derived Class
{
    public:
        int per, sal, marks, sub;
        persantage()
        {   
               cout<<"Enter Total Marks : ";
               cin>>marks;
               cout<<"Enter Total Subject : ";
               cin>>sub;
               per = marks / sub; 
               cout<<"Enter Member Salary : ";
               cin>>sal;   
        }
};

class read : public member, public persantage
{
    public:
        read()
        {           
                cout<<"\nmember name is "<<name;
                cout<<"\nMember Age is "<<age;
                cout<<"\nStudent persantage is "<<per;
                cout<<"\nMember Salary : "<<sal;   
        }
};

int main() // Main Functiion
{
    read r1;
    return 0;
}