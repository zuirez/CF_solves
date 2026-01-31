#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    char c[20];
    cin>>c;

    for(int i=0; i<strlen(c); i++)
    {
        if(i==0 && c[0]=='9')
            continue;
        else if(c[i]>'4')
        {
            c[i] = '9' - c[i] + '0';
        }
    }

    cout<<c;
}