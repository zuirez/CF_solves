#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n,m,i=1, j=1;
    vector<int> vn, vm, v;
    cin>>n>>m;

    // cout<<__gcd(n,m)<<endl;

    while(i<=n)
    {
        if(n%i==0)
        {
            vn.push_back(i);
        }
        i++;
    }

    while(j<=m)
    {
        if(m%j==0)
        {
            vm.push_back(j);
        }
        j++;
    }

    for(int i=0; i<vn.size(); i++)
    {
        for(int j=0; j<vm.size(); j++)
        {
            if(vn[i]==vm[j])
            {
                v.push_back(vn[i]);
            }
        }
    }

    sort(v.begin(), v.end(), greater<int>());
    cout<<v[0]<<endl;
}