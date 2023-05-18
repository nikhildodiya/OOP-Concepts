// WAP To Find The Multiplications Value And The Cubic Values Using Inline Fuction

#include <iostream>
using namespace std; // Using For Standard Output

inline long cube(long x){return x*x*x;} // Using Inline Function To Find Cubic Values
inline long mul(long x, long y){return x*y;} // Using Inline Function To Find Multiplication Values
int main()
{
   int n, no1, no2; // Variable To Store The Value

   // Pass The Msg To Take Users Input
   cout<<"enter no1 : ";
   cin>>no1;
   cout<<"enter no2 : ";
   cin>>no2;

 n = no1 * no2; // To Store The Answer For Cubic
 cout<<"Multiplication Of no1 and no2 : "<<mul(no1,no2);
 cout<<"\nCubic Value Of "<<mul(no1,no2)<<" : "<<cube(n);
}