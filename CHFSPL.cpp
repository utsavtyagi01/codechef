#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	 int a,b,c;
	 cin>>a>>b>>c;
	 int m;
	 m=min(a,b);
	 m=min(m,c);
	 if(m==a)
	 cout<<b+c<<endl;
	 else if(m==b)
	 cout<<a+c<<endl;
	 else
	 cout<<a+b<<endl;
	}
	return 0;
}
