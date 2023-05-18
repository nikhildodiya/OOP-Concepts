// CALCULATOR USING CONSTRUCTOR

#include<iostream>
using namespace std; // USING FOR STANDAR OUTPUT
int no1, no2; // VARIABLE FOR STORE THE VALUE
class A // BASE CLASS
{
    public:
    A() // CONSTRUCTOR
    {    
        // PAAS THE MSG TO TAKE USER INPUT
        cout<<"Enter No1 : ";
        cin>>no1;
        cout<<"Enter No2 : ";
        cin>>no2;
    }
};
class B : public A // DERIVED CLASS : BASE CLASS
{
    public:
    B()
    {
        cout<<"\nYour Addition is : "<<no1 + no2;
    }
};
class C : public B // SUB DERIVED CLASS : DERIVED CLASS
{
    public:
    C()
    {
        cout<<"\nYour Substraction is : "<<no1 - no2;
    }
};

class D : public C 
{
    public:
    D()
    {
        cout<<"\nYour Multiplication is : "<<no1 * no2;

    }
};

class E : public D
{
    public:
    E()
    {
        cout<<"\nYour Division is : "<<(float)no1 / (float)no2;
    }
};

int main() // MAIN FUNCTION
{
    E b1; // LAST CLASS AND CREATED OBJECT
    return 0;        
}