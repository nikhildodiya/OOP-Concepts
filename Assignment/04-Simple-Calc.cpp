// WAP To Create Simple Calculator Using Class

#include<iostream>
using namespace std; // Using For Standard Output
class Calc // Class
{

    int no1, no2; // Variable to store the value
    public:

    int value()
    {
        //Pass The Msg To Take user Input
        cout<<"Enter the value of the no1:";
        cin>>no1;
        cout<<"Enter the value of the no1:";
        cin>>no2;
        return 0;
    }

    int Addition()
    {
        cout<<"\nYour Addition is :"<<no1 + no2;
        return 0;
    }

    int substraction()
    {
        cout<<"\nYour Substraction is :"<<no1 - no2;
        return 0;
    }

    int division()
    {
        cout<<"\nYour Division is :"<<no1 / no2;
        return 0;
    }

    int multiplication()
    {
        cout<<"\nYour multiplication is :"<<no1 * no2;
        return 0;       
    }

    int modulo()
    {
        cout<<"\nYour modulo is :"<<no1 % no2;
        return 0;       
    }

};
int main()
{
    Calc obj;
    obj.value();
    obj.Addition();
    obj.substraction();
    obj.division();
    obj.multiplication();
    obj.modulo();
    return 0;
}