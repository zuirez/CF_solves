#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    int n,m;
    cin>>n>>m;

    int arr1[n], arr2[m];

    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }

    int j=0;

    for(int i=0; i<n; i++)
    {
        if(arr1[i]==arr2[j])
        {
            j++;
        }
    }

    if(j==m)
        cout<<"YES";
    else
        cout<<"NO";
}