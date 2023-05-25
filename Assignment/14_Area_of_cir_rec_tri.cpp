// Find Area OF Triangle, Circle and Rectangle Using Function Overloading

#include<iostream>
using namespace std; // Using For Standard Output
class name // Class
{
public:

    int area(int l,int b) // Function and Parameter
    {
        return(l*b); // Return area of rectengle
    }
    float area(float r)// Function And Prameter
    {
        return(3.14*r*r); // Return Area OF Circle
    }
    float area(float bs,float ht) // Function And Parameter
    {
        return((bs*ht)/2); // Return Area OF Triangle
    }
};

int main() // Main Function
{        
        name b1; // Class Name And Create Objct
        int l,b; // variable
        float r,bs,ht; // variable
        
        // Pass The MSg TO Take User Input
        cout<<endl<<"Enter Length and WIdth of rectangle:";
        cin>>l>>b;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter base and height of triangle:";
        cin>>bs>>ht;
        
        
        // Take User Output
        cout<<"\nArea of rectangle is "<<b1.area(l,b);
        cout<<"\nArea of circle is "<<b1.area(r);
        cout<<"\nArea of triangle is "<<b1.area(bs,ht);
}