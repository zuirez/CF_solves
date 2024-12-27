#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a!=b && a!=c) cout<<a<<endl;
        else if(b!=a && b!=c) cout<<b<<endl;
        else cout<<c<<endl; 
    }
}