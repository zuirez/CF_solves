#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n, even=0, odd=0, pos=0, neg=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        if(x%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(x>0)
        {
            pos++;
        }
        else if(x<0)
        {
            neg++;
        }
    }
    cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<pos<<endl<<"Negative: "<<neg<<endl;
}