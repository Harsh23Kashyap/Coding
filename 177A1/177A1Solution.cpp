
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N][N];

    int sum=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>arr[i][j];
            if(i==j)
            sum+=arr[i][j];
            if(i+j==N-1)
            sum+=arr[i][j];
        }
    }
    if(N&1)
    {
        int mid=N/2;
        sum-=3*arr[mid][mid];
        for(int i=0;i<N;i++)
        {
            sum+=arr[mid][i];
            sum+=arr[i][mid];
        }
        
    }
    cout<<sum<<endl;


   return 0;
}