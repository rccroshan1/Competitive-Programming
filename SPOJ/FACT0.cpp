#include <bits/stdc++.h>
#define ll long long unsigned int
using namespace std;

int main()
{

	ll t, n ,cnt;
	while(1)
	{
		cin>>n;
		if(n==0)
		{
			break;
		}
		for(ll i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				cnt=0;
				while(n%i==0)
				{
					cnt++;
					n=n/i;
				}
				cout<<i<<"^"<<cnt<<" ";	
			}
		}
		if(n>1)
		{
			cout<<n<<"^1";		
		}
		cout<<'\n';
}
return 0;
}

