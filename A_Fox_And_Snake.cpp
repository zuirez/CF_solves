#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,m;
    cin>>n>>m;

    int count = n*m;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i%2!=0)
                cout<<"#";
            else if(i%4==0)
            {
                cout<<"#";
                for(int k=1; k<=(m-1); k++)
                {
                    cout<<".";
                }
                goto done;
            }
            else if(i%4==2)
            {
                for(int k=1; k<=(m-1); k++)
                {
                    cout<<".";
                }
                cout<<"#";
                goto done;
            }
        }
        done:
        cout<<endl;
    }
}