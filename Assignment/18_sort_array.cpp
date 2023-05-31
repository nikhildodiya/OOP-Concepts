// Write a program of to sort the array using templates.

#include <iostream>
using namespace std; // Using For Standard Output
const int N = 7; // Constant Value
template <class Type> // Templet

class Array // Class
{
    private:
        Type arr[N];
    public:
        int read()
        {
            for(int i = 0; i < N; i++) //Condition
            {
                cin>>arr[i];
            }
        }
        int sortArr() // Function
        {
            Type temp;
            int SIZE = sizeof(arr)/sizeof(Type);
            for(int i = 0; i < SIZE - 1; i++)
            {
                for(int j = i + 1; j < SIZE; j++)
                {
                    if(arr[i] < arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
        int display() //Function
        {
            int SIZE = sizeof(arr)/sizeof(Type);
            for(int i = 0; i < SIZE; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main() // Main Fuction
{
    Array <int> obj;
    cout<<"Enter Number : ";
    obj.read();    
    obj.sortArr();
    cout<<endl<<"Sorted Number : ";
    obj.display();
    return 0;
}