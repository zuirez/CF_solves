#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,k,temp;
    cin>>n>>k;

    for(int i=0; i<k; i++)
    {
        temp = n%10;

        if(temp==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    cout<<n;
}