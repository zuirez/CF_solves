#include<iostream>
using namespace std;

int main()
{
    double a,b,c;
    char z,q;
    cin>>a>>z>>b>>q>>c;

    switch(z)
    {
        case '+': 
            if(a+b==c)
            cout<<"Yes";
            else
            cout<<a+b;
            break;

        case '-': 
            if(a-b==c)
            cout<<"Yes";
            else
            cout<<a-b;
            break;

        case '*': 
            if(a*b==c)
            cout<<"Yes";
            else
            cout<<a*b;
            break;
    }
}