#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;

    while(n--)
    {
        int a;
        cin>>a;

        if(a%3==1 || a%3==2)
        {
            cout<<"First"<<endl;
        }
        else if(a%3==0)
        {
            cout<<"Second"<<endl;
        }
    }
}