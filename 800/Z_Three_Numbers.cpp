#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int k,s,count=0;
    cin>>k>>s;

    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            int z=s-(i+j);
            if(z>=0 && z<=k)
            {
                count++;
            }
        }
    }

    cout<<count;
}