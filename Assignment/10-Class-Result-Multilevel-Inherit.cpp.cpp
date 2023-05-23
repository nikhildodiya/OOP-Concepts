#include<iostream>
using namespace std;
class A
{
    public:
    int roll[10], total[10];   
    float marks[10], marks1[10];
    int i;
    A()
    {
        for( i = 0; i < 3; i++)
        {
            cout<<"Enter Student Roll Number : ";
            cin>>roll[i];
        } 
    }

};
class B : public A
{
    public:
    B()
    {
        for( i = 0; i < 3; i++)
        {
            cout<<endl<<"Enter "<<roll[i]<<" Roll Number's Maths Subject Mark : ";
            cin>>marks[i];
            cout<<"Enter "<<roll[i]<<" Roll Number's Science Subject Marks : ";
            cin>>marks1[i];
        }
    }
};
class C : public B
{
    public:
    C()
    {
        for( i = 0; i < 3; i++)
        {
            cout<<"\nStudent Roll Number Is "<<roll[i];
            cout<<"\nMaths Mark Is "<<marks[i];
            cout<<"\nScience Mark Is "<<marks1[i];
            total[i] = marks[i] + marks1[i];
            cout<<"\nTotal Marks OF Two Subject = "<<total[i]<<endl;
        }
    }
};
int main()
{
    C c1;
    return 0;
}