#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    n=n+1;

    int arr[n], a[n];
    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        a[arr[i]]=i;
    }

    for(int i=1; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}