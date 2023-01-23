#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    int max=0;
	    cin>>n>>x;
	    int s,r;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s>>r;
	        if(s<=x&&max<=r)
	        max=r;	    }
	    cout<<max<<endl;
	    
	}
	return 0;
}
