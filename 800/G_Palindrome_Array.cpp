#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int arr2[n];

    for(int i=1; i<=n; i++)
    {
        arr2[n-i]=arr[i-1];
    }

    bool isPalindrome = true;

    for(int i=0; i<n; i++)
    {
        if(arr2[i]!=arr[i])
        {
            isPalindrome=false;
            break;
        }
    }

    if(isPalindrome==true)
        cout<<"YES";
    else
        cout<<"NO";
}