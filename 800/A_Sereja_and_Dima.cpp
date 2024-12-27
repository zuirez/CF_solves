#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    bool count=1;
    int s=0,d=0;
    cin>>n;
 
    vector<int> v(n);
    for(int i=0; i<n; i++) 
    {
        cin>>v[i];
    }
 
    for(int i=n; i>0; i--)
    {
        if(count==1)
        {
            if(v[0]>v.back())
            {
                s+=v[0];
                v.erase(v.begin());
                count=0;
            }
            else
            {
                s+=v.back();
                v.pop_back();
                count=0;
            }
        }
 
        else
        {
            if(v[0]>v.back())
            {
                d+=v[0];
                v.erase(v.begin());
                count=1;
            }
            else
            {
                d+=v.back();
                v.pop_back();
                count=1;
            }
        }
    }
    cout<<s<<" "<<d;
}
