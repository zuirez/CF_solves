#include<iostream>
using namespace std;

int main()
{
    double a;
    cin>>a;

    if(a-int(a)==0)
    cout<<"int "<<a;
    else
    cout<<"float "<<int(a)<<" "<<a-int(a);
}