#include <set>
#include <iostream>
using namespace std;
int main()
{
    int two,three,five,six;
    cin>>two>>three>>five>>six;

    int lowest=min(two,five);
    lowest=min(lowest,six);
    int add=256*lowest;
    two-=lowest;
    five-=lowest;
    six-=lowest;

    lowest=min(three,two);
    add+=lowest*32;
    cout<<add<<endl;

    return 0;
}
