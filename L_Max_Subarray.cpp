#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n; i++)
        {
            int maxi= INT_MIN;
            for(int j=i; j<n; j++)
            {
                if(arr[j]>maxi) 
                    maxi= arr[j];
            
                cout<<maxi<<" ";
            }
        }
        cout<<endl;
    }
}