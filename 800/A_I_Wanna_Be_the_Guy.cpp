#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,a;
    set<int>lx;
    cin>>n>>p;

    for(int i=0; i<p; i++)
    {
        cin>>a;
        lx.insert(a);
    }

    cin>>q;

    for(int i=0; i<q; i++)
    {
        cin>>a;
        lx.insert(a);
    }

    if(lx.size()==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
}