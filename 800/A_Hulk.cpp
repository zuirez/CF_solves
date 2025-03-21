#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            cout<<"I love ";
        }

        else
        {
            cout<<"I hate ";
        }

        if(i==n)
        {
            cout<<"it";
        }

        else
        {
            cout<<"that ";
        }
    }
}