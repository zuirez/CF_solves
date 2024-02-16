#include<iostream>
using namespace std;

int main()
{
    long long a;
    cin>>a;
    
    while (a>9)
    {
        a=a/10;
    }

    if(a%2==0)
    cout<<"EVEN";
    else
    cout<<"ODD";
}