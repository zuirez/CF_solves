#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,k=1;
    cin>>n;

    int space=(n-1);

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<space; j++)
        {
            cout<<" ";
        }
        space--;

        for(int k=1; k<=(2*i)-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    int space2=1;
    for(int i=n; i>0; i--)
    {
        for(int j=(2*i)-1; j>0; j--)
        {
            cout<<"*";
        }
        cout<<endl;

        for(int k=space2; k>0; k--)
        {
            cout<<" ";
        }
        space2++;
    }
}