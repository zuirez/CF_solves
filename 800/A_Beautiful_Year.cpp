#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int y;
    cin>>y;

    while(true)
    {
        y++;
        int temp = y;

        set<int>s;

        while(temp>0)
        {
            s.insert(temp%10);
            temp=temp/10;
        }

        if(s.size()==4)
        {
            cout<<y;
            break;
        }
    }
}