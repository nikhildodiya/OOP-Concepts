// WAP TO CRICKETER INFO USING SINGLE INHERITANCE

#include<iostream>
using namespace std; // USING FOR STANDARD OUTPUT
class A    // CLASS NAME
{
public:

    int run, match, balls, best; // VARIABLE FOR INTEGER VALUE
    char bn[50], from[50]; // VARIABLE FOR CHARACTER VALUE
    float avg, str; // VARIABLE FOR FLOATING VALUE
    
    int getdata()
    {
        // PASS THE MSG TO TAKE USER INPUT
        cout<<"Enter Batsman name : ";
        cin>>bn;
        cout<<"Where Batsman from : ";
        cin>>from;
        cout<<"Total Runs : ";
        cin>>run;
        cout<<"Total Match : ";
        cin>>match;
        cout<<"Ball Faced : ";
        cin>>balls;
        cout<<"Best Score : ";
        cin>>best;
        return 0;
    }
};

class B : public A // DERIVED CLASS : BASE CLASS
{
public:
    int showdata()
    {
        // USER OUTPUT
        avg = (float)run / (float)match; // CALCULATION FOR BATSMAN AVERAGE
        cout<<"\nAvarage Is = "<<avg;
        
        avg = (float)run / (float)match; // CALCULATION FOR BATSMAN STRIKE RATE
        str = (float (run) / balls) * 100; 
        cout<<"\nStrike Rate Is = "<<str;
        
        cout<<"\n_____________________________\n";                
        cout<<"ScoreCard";
        cout<<"\n_____________________________\n";                
        cout<<endl<<bn << " " << from;
        cout<<"\n________________________________________________________________________________\n";                

        cout<< "Matches "   " Runs "    " Avarage "    " Strike Rate "    " Best Score"; 
        cout<<endl<<    match<<"        "<<run<<"  "<<avg<<"  "<<str<<"        "<< best;
        cout<<"\n________________________________________________________________________________\n";                
                
        
        /* cout<<"\nBatsman name = "<<bn;
        cout<<"\nBatsman from = "<<from;
        cout<<"\nTotal Runs = "<<run;
        cout<<"\nTotal Match played is = "<<match;
        cout<<"\nBest Score Is = "<<best;*/        
        
        /* avg = (float)run / (float)match; // CALCULATION FOR BATSMAN AVERAGE
        cout<<"\nAvarage Is = "<<avg;
        
        avg = (float)run / (float)match; // CALCULATION FOR BATSMAN STRIKE RATE
        str = (float (run) / balls) * 100; 
        cout<<"\nStrike Rate Is = "<<str; */
        return 0;
    }
};

int main() // MAIN FUNCTION
{
    B b1; // DERIVED CLASS AND CREATED OBJECT
    b1.getdata(); // FUNCTION
    b1.showdata();
    return 0;
}