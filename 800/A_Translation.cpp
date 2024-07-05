#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    string s,r;
    cin>>s;
    cin>>r;

    reverse(s.begin(), s.end());

    if(s==r)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}