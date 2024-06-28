#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    while(n--)
    {
        int n;
        cin>>n;

        if(n==2)
        {
            cout<<2<<endl;
        }
        else if(n==3)
        {
            cout<<3<<endl;
        }
        else if(n>3)
        {
            cout<<2<<endl;
        }
    }
}