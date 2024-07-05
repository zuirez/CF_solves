#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

void result(int ca, int cd)
{
    if(ca>cd)
    {
        cout<<"Anton";
    }
    else if(cd>ca)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}

int main()
{
    optimize();

    int n,ca=0,cd=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            ca++;
        }
        else
        {
            cd++;
        }
    }
    result(ca,cd);
}