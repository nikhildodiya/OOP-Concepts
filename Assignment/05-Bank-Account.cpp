#include<iostream>
using namespace std;
class bank
{
    int acc, bal;
    char nm[20], type[20];

public:
    int getdata()
    {
        cout<<"Enter Depositer Name : ";
        cin>>nm;
        cout<<"Enter Account Number : ";
        cin>>acc;
        cout<<"Enter Account Type : ";
        cin>>type;
        cout<<"Enter Balance amount in The Account : ";
        cin>>bal;
        return 0;
    }
public:
    int showdata()
    {
        cout<<"\n_____________________________\n";
        cout<<"\ndeposite name is = "<<nm;
        cout<<"\ndepositer Account No is = "<<acc;
        cout<<"\nDepositer Bank Account Type is = "<<type;
        cout<<"\nBalance amount in The Account = "<<bal<<endl;           
        return 0;
    
    }
    public:
    int account()
    {
        int depo, balance, withdrawl, with, left;
        cout<<"\nDeposite Amount : ";
        cin>>depo;
        cout<<"Withdraw Amount : ";
        cin>>with;

        balance = bal + depo;
        cout<<"Your Balance After Deposite "<< balance;
    
        withdrawl = bal - with;
        cout<<"\nYour Balance After Withdrawl "<<withdrawl;
    
        cout<<"\n_____________________________\n";
        
        left = balance - with;
        cout<<endl<<nm <<" Your balance is "<<left;
        return 0;
    }
};    
int main()
{
    bank b1;
    b1.getdata();
    b1.showdata();
    b1.account();
    return 0;
}