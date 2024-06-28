#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int m,n,a,c=0;
    cin>>m>>n;

    a=m*n;

    if(a%2==0)
    {
        c=a/2;
    }
    else if(a%2!=0)
    {
        a=a-1;
        c=a/2;
    }

    cout<<c;
}