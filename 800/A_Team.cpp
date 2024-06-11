#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,fcount=0;
    cin>>n;

    while(n--)
    {
        vector<int>v;
        int count=0;
        for(int i=0; i<3; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }

        for(auto u:v)
        {
            if(u==1)
            {
                count++;
            }
        }
        if(count>1)
        {
            fcount++;
        }
    }

    cout<<fcount;
}