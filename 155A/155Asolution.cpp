
#include<vector>
#include <iostream>
using namespace std;

int main()
{
  int N;
  cin>>N;

  vector<int> v(N,0);
  for(int i=0;i<N;i++)
    cin>>v[i];
  
  int maxi=v[0];
  int mini=v[0];

  int count=0;


  for(int i=1;i<N;i++)
  {
    if(maxi<v[i])
    {
      count++;
      maxi=max(maxi,v[i]);
    }
    if(v[i]<mini)
    {
      count++;
      mini=min(mini,v[i]);
    }
  }
  cout<<count<<endl;
   return 0;
}