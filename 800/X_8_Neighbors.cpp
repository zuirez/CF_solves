#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    int n,m,x,y;
    cin>>n>>m;

    char arr[n+1][m+1];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }

    cin>>x>>y;

    char t=arr[x][y];

    if(t==arr[x-1][y] && t==arr[x+1][y] && t==arr[x][y-1] && t==arr[x][y+1] && t==arr[x-1][y-1] && t==arr[x+1][y+1] && t==arr[x+1][y-1] && t==arr[x-1][y+1])
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}