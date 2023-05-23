/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include<iostream>
using namespace std; // Using For Standard Output
class Overloading // Class
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a * b * c;
    }
    float div(float a, float b)
    {
        return a / b;
    }
    float sub(float a, float b)
    {
        return a - b;
    }
};
int main()
{
    Overloading over; // Class Name __ Created Object Name
    int no1, no2; // Variable For Store The Value

    // Pass The Msg To take User's input
    cout<<"Enter First Number : ";
    cin>>no1;
    cout<<"Enter Second Number : ";
    cin>>no2;
    
    // To take user's Output // Claculation of Two Numbers
    cout << endl << "Addition of 1st and 2nd numbers is : " <<over.add(no1, no2) << endl;
    cout << "Multiplication of 1st and 2nd number is : "<< over.add(no1, no2, no1) << endl;
    cout << "divison of 1st and 2nd number is : "<< over.div(no1, no2) << endl;
    cout << "divison of 1st and 2nd number is : "<< over.sub(no1, no2) << endl;
}