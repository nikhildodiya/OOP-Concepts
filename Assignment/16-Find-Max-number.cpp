// Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std; // Using For Standard Output
class Max //Class
{
private:
   int no1, no2; // Variable For Store The Value
public:

   int input() // Function
   {
        // Pass The Msg To Take User Input
       cout<<"Enter First number:";
       cin>>no1;
       cout<<"Enter Second number:";
       cin>>no2;
       return 0;
   }
   friend int find(Max t);
};

int find(Max t) 
{
   if (t.no1 > t.no2) // Condition For Find Max Number
   {
       cout<<"\nMax Number Is " << t.no1;
   } 
   else 
   {
       cout<<"\nMax Number is "<< t.no2;
   }

   // return 0; 
};

int main() // Main Function
{
   Max t;
   t.input();
   find(t);

   return 0;
}