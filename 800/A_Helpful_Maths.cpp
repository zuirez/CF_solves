#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    string s;
    vector<char>v;
    cin>>s;

    for(int i=0; i<s.size(); i=i+2)
    {
        v.push_back(s[i]);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
    {
        if(i>0)
        {
            cout<<'+';
        }
        cout<<v[i];
    }   
}