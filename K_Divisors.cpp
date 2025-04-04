#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n, i=1;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
}