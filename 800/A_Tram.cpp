#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,max=0,c=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;

        c=c-a+b;
        if(c>max)
        {
            max=c;
        }
    }
    cout<<max;
}