#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int a[5][5];
    int I,J,count=0;
    
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

    while(I!=2)
    {
        if(I<2)
        {
            swap(a[I][J],a[I+1][J]);
            I++;
            count++;
        }
        else
        {
            swap(a[I][J],a[I-1][J]);
            I--;
            count++;
        }
    }

    while(J!=2)
    {
        if(J<2)
        {
            swap(a[I][J],a[I][J+1]);
            J++;
            count++;
        }
        else
        {
            swap(a[I][J],a[I][J-1]);
            J--;
            count++;
        }
    }

    cout<<count;
}