
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N%2==1)
        cout<<-1;
    else
    {
        int arr[N+1];
        for(int i=0;i<=N;i++)
        arr[i]=i;

        for(int i=1;i<=N;i+=2)
        {
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
        for(int i=1;i<=N;i++)
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}