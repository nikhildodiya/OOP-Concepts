// Write a program of to swap the two values using templates

#include<iostream>
using namespace std; // Using For Standar Output
template <class T> // Template

int Swap(T &x, T &y) 
{
    // Condition Swap Two Number
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main() // Main Function
{
    int x, y; // Variable For Store The Value
   
    // Passs THe Msg To take User's Input  
    cout<<endl<<"Enter First Number : ";
    cin>>x;
    cout<<"Enter Second Number : ";
    cin>>y;

    Swap(x, y); // Swap x, y

    // Output After Swaping
    cout << "\nFirst Number is:" << x;
    cout << "\nSecond Number is:" << y;
    return 0;
}