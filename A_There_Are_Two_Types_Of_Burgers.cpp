#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int buns, pattie, cutlet, beefPrice, chickenPrice;
        cin>>buns>>pattie>>cutlet>>beefPrice>>chickenPrice;

        if(buns<=1)
        {
            cout<<"0"<<endl; 
            continue;
        }    

        if(buns%2!=0)
            buns=buns-1;

        buns=buns/2;

        if(buns>=(pattie+cutlet))
        {
            cout<<((pattie*beefPrice)+(cutlet*chickenPrice))<<endl;
        }
        else if(beefPrice>chickenPrice && pattie>=buns)
        {
            cout<<(beefPrice*buns)<<endl;
        }    
        else if(beefPrice>chickenPrice && pattie<buns)
        {
            cout<<((beefPrice*pattie)+((buns-pattie)*chickenPrice))<<endl;
        }
        else if(chickenPrice>beefPrice && cutlet>=buns)
        {
            cout<<(chickenPrice*buns)<<endl;
        }
        else if(chickenPrice>beefPrice && cutlet<buns)
        {
            cout<<((chickenPrice*cutlet)+((buns-cutlet)*beefPrice))<<endl;
        }
        else if(beefPrice==chickenPrice)
        {
            cout<<(beefPrice*buns)<<endl;
        }
    }
}