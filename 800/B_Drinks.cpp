#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    double d,t=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;

        t=t+a;
    }

    d=t/n;

    cout<<fixed<<setprecision(12)<<d;
}