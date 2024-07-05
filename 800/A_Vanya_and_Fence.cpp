#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,h,count=0;
    cin>>n>>h;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;

        if(a>h)
        {
            count=count+2;
        }
        else
        {
            count++;
        }
    }
    cout<<count;
}