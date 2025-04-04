#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n, reversed=0;
    cin>>n;
    int original=n;

    while (n > 0) 
    {
        int a = n%10;
        reversed=(reversed*10)+a;
        n=n/10;
    }

    cout<<reversed<<endl;

    if(original==reversed)
        cout<<"YES";
    else
        cout<<"NO";
}