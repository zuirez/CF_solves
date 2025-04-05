#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,sum=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        sum=sum+(int)s[i]-48;
    }

    cout<<sum;
}