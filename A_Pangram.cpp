#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    string s;   
    cin>>s;

    set<char>a;

    for(int i=0; i<n; i++)
    {
        a.insert(tolower(s[i]));
    }

    if(a.size()==26)
    cout<<"YES";
    else
    cout<<"NO";
}