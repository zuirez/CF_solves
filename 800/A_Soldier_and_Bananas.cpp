#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int k,n,w,cost=0,b=0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
    {
        cost=cost+(k*i);
    }

    if(cost>n)
    {
        b=(cost-n);
        cout<<b;
    }
    else
    {
        cout<<0;
    }
}