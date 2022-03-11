#include <set>
#include <iostream>
using namespace std;
int main()
{
    set<int>s;
    int a;
    cin>>a;
    s.insert(a);
    cin>>a;
    s.insert(a);
    cin>>a;
    s.insert(a);
    cin>>a;
    s.insert(a);
    cout<<4-s.size()<<endl;
    return 0;
}