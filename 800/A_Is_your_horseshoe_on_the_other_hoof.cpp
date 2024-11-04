#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int count=0;
    map<int, int>m;

    for(int i=0; i<4; i++)
    {
        int a;
        cin>>a;
        
        if(m[a]) count++;
        else m[a]=1;
    }
    cout<<count;
}