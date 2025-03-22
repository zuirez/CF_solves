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

    int max=0, min=arr[0], maxIndex, minIndex;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            maxIndex = i;
        }

        if(arr[i]<=min)
        {
            min = arr[i];
            minIndex = i;
        }
    }

    if (maxIndex > minIndex)
    cout << (maxIndex - 1) + (n - minIndex) - 1;
    else
    cout << (maxIndex - 1) + (n - minIndex);
}