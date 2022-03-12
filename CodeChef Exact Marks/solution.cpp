#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N,Q;
	    cin>>N>>Q;
	    
	    int a=0,b=0,c=0;
	    if(Q%3==0)
	    {
	        a=Q/3;
	        b=0;
	        c=abs(N-a);
	    }
	    else
	    {
	        a=(Q/3)+1;
	        b=abs(a*3-Q);
	        c=abs(N-a-b);
	    }
	    
	    if(a+b+c==N)
	    {
	        cout<<"Yes"<<endl;
	        cout<<a<<" "<<b<<" "<<c<<endl;
	    }
	    else
	        cout<<"No"<<endl;
	    
	}
	return 0;
}
