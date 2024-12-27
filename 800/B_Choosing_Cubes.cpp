#include <bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'
 
int main()
{
    optimize();
 
    int t;
    cin>>t;
 
    for(int z=0; z<t; z++)
    {
        int n,f,k;
        cin>>n>>f>>k;
 
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
 
        int fav = v[f-1];
        int count=0, count2=0;
 
        sort(v.rbegin(), v.rend());
 
        for(int l=0; l<n; l++)
        {
            if(v[l]==fav)
            {
                count++;
            }
        }
 
        if (n>=k) 
        {
            v.erase(v.begin(), v.begin() + k);
        }
 
        for(int p=0; p<v.size(); p++)
        {
            if(v[p]==fav)
            {
                count2++;
            }
        }
 
        if(count2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(count==count2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"MAYBE"<<endl;
        }
    }
}
