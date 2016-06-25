#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	long long unsigned int x,q,t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;	x=(n*(n+1))/2;
		if(k==0)
		{
			cout<<x;
			continue;
		}
		q=k%x;
		if(q)
			q=(x-q);
		cout<<q<<'\n';
	}
return 0;
}
