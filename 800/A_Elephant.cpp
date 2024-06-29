#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    long long n,count=0;
    cin>>n;

    while(n>0)
    {
        if(n>=5)
        {
            n=n-5;
            count++;
        }
        else if(n>=4)
        {
            n=n-4;
            count++;
        }
        else if(n>=3)
        {
            n=n-3;
            count++;
        }
        else if(n>=2)
        {
            n=n-2;
            count++;
        }
        else if(n>=1)
        {
            n=n-1;
            count++;
        }
    }
    cout<<count;
}