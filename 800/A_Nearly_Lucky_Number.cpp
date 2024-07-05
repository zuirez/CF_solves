#include <bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'
 
int main()
{
    optimize();
 
    long long n,count=0;
    cin>>n;
 
    string s=to_string(n);
 
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            count++;
        }
    }
 
    if(count==4 || count==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}