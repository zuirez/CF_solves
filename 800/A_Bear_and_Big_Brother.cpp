#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int a,b,count=0;
    cin>>a>>b;

    while(a<=b)
    {
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count;
}