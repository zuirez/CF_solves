#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b==c || b+c==a || c+a==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}