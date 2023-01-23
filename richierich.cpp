#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int time,a,b,x;
	    cin>>a>>b>>x;
        time=(b-a)/x;
        cout<<time<<endl;
	}
	return 0;
}
