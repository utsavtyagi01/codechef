#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n,s,d;
	   cin>>n>>s;
	   if(n>=s)
	   d=s;
	   else
	   d=n-(s-n);
	   cout<<d<<endl;
	}
	return 0;
}
