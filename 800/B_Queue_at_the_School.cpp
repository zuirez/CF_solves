#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;

    for(int i=0; i<t; i++)
    {
        for(int j=0; j<s.size()-1; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout<<s;
}