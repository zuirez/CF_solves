#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int t;
    cin>>t;

    while(t>0)
    {
        int n;
        long long f=1;
        cin>>n;
        
        while(n>0)
        {
            f=f*n;
            n--;
        }
        cout<<f<<endl;

        t--;
    }
}