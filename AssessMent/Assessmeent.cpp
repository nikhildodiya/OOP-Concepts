#include<iostream>
using namespace std; //using For Standard Output
class detail //Class
{
public:
    int lec; // Variable For Store Value
    string deta, cou, name, sub; // String Variable
    detail() // Constructor
{
    // Pass The Msg For Take Input From User
    cout<<endl<<"Enter Name Of Lecturer : ";
    cin>>name;
    cout<<"Enter Name Of Subject : ";
    cin>>sub;
    cout<<"Enter Name Of Cource : ";
    cin>>cou;
    cout<<"Number Of Lecture : ";
    cin>>lec;
}
    int detailadd() // Data Function
    {
        cout<<"Add Lecture Details : " ;
        cin>>deta;
    }
    
    int showdata() // Data Function
    {
     cout<<endl<<"--------------Lecturer Details--------------"<<endl;
     
        cout<<endl<<"Name Of Lecturer Is "<<name;
        cout<<endl<<"Name Of Subject Is "<<sub;
        cout<<endl<<"Name Of Cource Is "<<cou;
        cout<<endl<<"Number Of Lecture Is "<<lec;
        cout<<endl<<"Details Of Lecture "<<deta;
        return 0;
    }
    
};

int main() // Main Function
{
    detail obj; // ClassName : Object Name
    obj.detailadd(); 
    obj.showdata();
    return 0;
}    