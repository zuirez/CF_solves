#include<iostream>
using namespace std;

int main()
{
    long long a;
    int year,month,day;
    
    cin>>a;

    year=a/365;
    cout<<year<<" years"<<endl;

    month=a%365;
    day=month%30;
    month=month/30;
    cout<<month<<" months"<<endl;
    cout<<day<<" days";
}