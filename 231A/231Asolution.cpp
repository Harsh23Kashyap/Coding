#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int sum=0;
    while(N--)
    {
        int arr[2];
        cin>>arr[0]>>arr[1]>>arr[2];
        if(arr[0]+arr[1]+arr[2]>=2)
            sum++;

    }
    cout<<sum<<endl;
    return 0;
}