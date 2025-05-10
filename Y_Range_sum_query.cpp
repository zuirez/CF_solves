#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    ll n,q;
    cin>>n>>q;

    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    ll prefix[n+1]={0};
    for(ll i=0; i<n; i++)
    {
        prefix[i+1]=prefix[i]+arr[i];
    }

    while(q--)
    {
        ll sum=0;

        ll l,r;
        cin>>l>>r;

        sum=prefix[r]-prefix[l-1];

        cout<<sum<<endl;
    }
}