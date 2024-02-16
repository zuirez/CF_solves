#include<iostream>
using namespace std;

int main()
{
    double a,b;
    char z;
    cin>>a>>z>>b;

    switch(z)
    {
        case '>': 
            if(a>b)
            cout<<"Right";
            else
            cout<<"Wrong";
            break;

        case '=': 
            if(a==b)
            cout<<"Right";
            else
            cout<<"Wrong";
            break;

        case '<': 
            if(a<b)
            cout<<"Right";
            else
            cout<<"Wrong";
            break;
    }
}