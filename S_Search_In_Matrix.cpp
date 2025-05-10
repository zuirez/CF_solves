#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,m,x,count=0;
    cin>>n>>m;

    int arr[n][m];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    cin>>x;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"will not take number"; 
                count++;
                goto done;
            }
        }
    }
    done:
    if(count==0) 
    cout<<"will take number";
}