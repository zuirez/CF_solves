#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,x;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cin>>x;

    bool found=false;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            cout<<i;
            found=true;
            break;
        }
    }

    if(found==false)
        cout<<"-1";
}
