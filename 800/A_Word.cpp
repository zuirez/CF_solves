#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int l=0,u=0;
    string s;
    cin>>s;

    char arr[s.size()];

    for(int i=0; i<s.size(); i++)
    {
        arr[i]=s[i];
    }

    for(int i=0; i<s.size(); i++)
    {
        if(arr[i]==tolower(arr[i]))
        {
            l++;
        }
        else
        {
            u++;
        }
    }

    if(l>u)
    {
        for(int i=0; i<s.size(); i++)
        {
            arr[i]=tolower(arr[i]);
        }
    }
   
    else if(u>l)
    {
        for(int i=0; i<s.size(); i++)
        {
            arr[i]=toupper(arr[i]);
        }
    }

    else
    {
        for(int i=0; i<s.size(); i++)
        {
            arr[i]=tolower(arr[i]);
        }
    }

    for(int i=0; i<s.size(); i++)
    {
        cout<<arr[i];
    }
}