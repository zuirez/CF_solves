#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int a[5][5];
    int I,J;
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                I=i;
                J=j;
            }
        }
    }

    int count = abs(I-2)+ abs(J-2);

    cout<<count;
}