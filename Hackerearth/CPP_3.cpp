#include<bits/stdc++.h>
#define ll long long unsigned int
using namespace std;
typedef priority_queue<ll> P;
int main()
{
	ll T,N,M,i,temp,x=0,val;
	scanf("%lld",&T);
	while(T--)
	{
		P pq;
		scanf("%lld %lld",&M,&N);
		for(i=0;i<M;i++)
		{
			scanf("%lld",&temp);
			pq.push(temp);
		}
		for(i=0;i<N;i++)
		{
			val=pq.top();
			x+=val;
			pq.pop();
			pq.push(val/2);
		}
		printf("%lld\n",x);
	}
return 0;
}
