#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    int space=(n-1);

    for(int i=1; i<=n; i++)
    {
        for(int j=space; j>0; j--)
        {
            cout<<" ";
        }
        space--;

        for(int k=0; k<(2*i)-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}