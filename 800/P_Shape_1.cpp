#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    for(int i=n; i>0; i--)
    {
        for(int j=i; j>0; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}