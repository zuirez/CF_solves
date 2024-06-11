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
        string s;
        cin>>s;

        if(s.size()>10)
        {
            char f,l;
            int count=0;
            l=s.back();
            f=s[0];
            s.erase(s.begin());
            s.pop_back();

            for(int i=s.size(); i>0; i--)
            {
                count++;
            }

            cout<<f<<count<<l<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
}