// DEFINE A CLASS TO REPRESENT A BANK ACCOUNT..

#include<iostream>
using namespace std; // USING FOR STANDARD OUTPUT
class bank // CLASS NAME
{
    int acc, bal; // VARIABLE FOR STORE THE VALUE 
    char nm[50], type[50];

public:
    int getdata()
    {
        // PASS THE MSG TO TAKE USER INPUT
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
        // USER'S OUTPUT
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

        balance = bal + depo; // CALCULATION FOR DEPOSITED BALANCE
        cout<<"Your Balance After Deposite "<< balance;
    
        withdrawl = bal - with; // CALCULATION FOR WITHDRAWL BALANCE
        cout<<"\nYour Balance After Withdrawl "<<withdrawl;
    
        cout<<"\n_____________________________\n";
        
        left = balance - with; // CALCULATION FOR TOTAL BALANCE
        cout<<endl<<nm <<" Your balance is "<<left;
        cout<<"\n_____________________________\n";
        cout<<endl<<nm<<" Thank Your For Choosing Our Service....";
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