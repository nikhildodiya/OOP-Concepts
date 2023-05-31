// Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std; // Using For Standard Output
class swapping  // Class
{    
    public:
    int a , b; // Varibale
        int get()  
        {
            // Pass THe Msg To Take User's Output
            cout<<"Enter First numbers : ";
            cin>>a; 
            cout<<"Enter Second Number : ";
            cin>>b;
        }
    friend int swap(int x , int y);
    int display()  
    {
        // Pass THe Msg to Take Ouput
        cout<<endl<< "After swapping : " <<endl;
        cout<<"a = "<<a<<endl; 
        cout<<"b = "<<b<<endl;
    }
};

int swap(swapping &t) // Function    
{
    // Condition For Swap THe Value
    t.a = t.a + t.b;
    t.b = t.a - t.b;
    t.a = t.a - t.b;
}
int main() // Main Function
{
    swapping obj;
    obj.get();
    swap(obj);
    obj.display();
    return 0;
}