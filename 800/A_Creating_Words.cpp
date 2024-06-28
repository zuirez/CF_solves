#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    while(n--)
    {
        string a,b;
        cin>>a>>b;

        string af,bf;

        af=a[0];
        a.erase(a.begin());
        bf=b[0];
        b.erase(b.begin());
        string c=a;

        a=af+b;
        b=bf+c;

        cout<<b<<" "<<a<<endl;
    }
}