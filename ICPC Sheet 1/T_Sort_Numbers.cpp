#include<iostream>
using namespace std;

int main()
{
    long long a,b,c,min,max,mid,sum;
    cin>>a>>b>>c;

    sum=a+b+c;
    min=0;
    max=0;

    if(a>=b && a>=c)
    max=a;
    else if(b>=a && b>=c)
    max=b;
    else
    max=c;

    if(a<=b && a<=c)
    min=a;
    else if(b<=a && b<=c)
    min=b;
    else
    min=c;

    mid=sum-(max+min);

    cout<<min<<endl<<mid<<endl<<max<<endl<<endl<<a<<endl<<b<<endl<<c;
}   