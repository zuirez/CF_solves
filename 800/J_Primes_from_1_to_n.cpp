#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n, count=0;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<i<<" ";
        }
        count=0;
    }
}