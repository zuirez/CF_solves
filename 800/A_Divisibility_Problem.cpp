#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else if(a%b!=0)
        {
            int z = a%b;
            int r = b-z;
            cout<<r<<endl;
        }
    }
}