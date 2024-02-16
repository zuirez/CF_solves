#include<iostream>
using namespace std;

int main()
{
    double a;
    cin>>a;

    if(a>=0 && a<=100)
    cout<<"Interval ";

        if(a>=0 && a<=25)
        cout<<"[0,25]";

        else if(a>25 && a<=50)
        cout<<"(25,50]";

        else if(a>50 && a<=75)
        cout<<"(50,75]";

        else if(a>75 && a<=100)
        cout<<"(75,100]";
    else 
    cout<<"Out of Intervals";        
}