#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<double> v(n,0.0);
    for(int i=0;i<n;i++)
        cin>>v[i];

    double sum=0.0;
    for(int i=0;i<n;i++)
    sum+=v[i];


    cout<<(sum*1.0)/(1.0*n)<<endl;
    return 0;
}
