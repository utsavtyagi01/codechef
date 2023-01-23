#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int d,l,r;
	    cin>>d>>l>>r;
	    if(l<=d&&d<=r)
	    cout<<"Take second dose now\n";
	    else if(d>r)
	    cout<<"Too Late\n";
	    else
	    cout<<"Too Early\n";
	}
	return 0;
}
