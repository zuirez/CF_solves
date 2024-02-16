#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b;
    
    c=a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<int(c)<<endl;

    cout<<"ceil "<<a<<" / "<<b<<" = ";
    if(c==int(c))
        cout<<c<<endl;
    else
        cout<<int(c+1)<<endl;

    cout<<"round "<<a<<" / "<<b<<" = ";

    if(c==int(c))
        cout<<c;
    
    else if(c<int(c)+0.50)
        cout<<int(c);

    else if(c>=int(c)+0.50)
        cout<<int(c+1);
}