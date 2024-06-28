#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,k,c,count=0;
    cin>>n>>k;

    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    c=v[k-1];

    for(int i=0; i<n; i++)
    {
        if(v[i]>=c && v[i]>0)
        {
            count++;
        }   
    }

    cout<<count<<endl;
}