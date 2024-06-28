#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    char a[110], b[110];
    cin>>a>>b;

    for(int i=0; i<sizeof(a); i++)
    {
        a[i]=tolower(a[i]);
    }

    for(int i=0; i<sizeof(b); i++)
    {
        b[i]=tolower(b[i]);
    }

    cout<<strcmp(a,b);
}