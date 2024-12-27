#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    string s,s1;

    cin>>s>>s1;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s1[i])
        {
            cout<<'0';
        }
        else
        {
            cout<<'1';
        }
    }
}