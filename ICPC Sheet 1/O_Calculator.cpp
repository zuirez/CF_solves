#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    char z;
    cin>>a>>z>>b;

    switch (z)
    {
    case '+': cout<<a+b;
        break;
    case '-': cout<<a-b;
        break;
    case '*': cout<<a*b;
        break;
    case '/': cout<<a/b;
        break;
    }
}