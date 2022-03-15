#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char maxo=s[0];
    for(int i=1;i<s.length();i++)
    {
        maxo=max(s[i],maxo);
    }
    string add="";
    for(int i=0;i<s.length();i++)
    {
       if(s[i]==maxo)
       add+=maxo;
    }
    cout<<add<<endl;
    return 0;
}
