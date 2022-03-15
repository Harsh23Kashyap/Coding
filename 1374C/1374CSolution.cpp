#include <string>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int total=0,flip=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')')
            {
                flip--;
                if(flip<0)
                {
                    flip=0;
                    total++;
                }
            }
            else
            flip++;
        }
        cout<<total<<endl;

    }


    return 0;
}
