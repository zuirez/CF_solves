#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,x=0;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        if(s=="--X" || s=="X--")
        {
            x--;
        }
        else if(s=="++X" || s=="X++")
        {
            x++;
        }
    }
    cout<<x;
}