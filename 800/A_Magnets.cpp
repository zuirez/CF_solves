#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,count=0;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]!=v[i+1])
        {
            count++;
        }
    }

    cout<<count;
}