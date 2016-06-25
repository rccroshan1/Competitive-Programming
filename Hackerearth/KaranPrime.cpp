#include <bits/stdc++.h>
#define ll long long unsigned int
#define pb push_back
#define Max 1000050
using namespace std;
vector <int> v;
typedef pair <int,int> P;
ll A[Max];
void sieve()
{
	for(int i=3;i<=Max;i++)
	{
		A[i]=1;
	}
	int s=sqrt(Max);
	for(int i=3;i<=s;i+=2)
	{
		if(A[i])
		{
			for(ll j=i*i;j<=Max;j+=2*i)
				A[j]=0;
		}
	}
	v.pb(2);
	for(ll i=3;i<=Max;i+=2)
	{
		if(A[i])
			v.pb(i);
	}
}

int main()
{
	sieve();	ll sum;	int t,a,b;
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>a>>b;	int s=v.size();	sum=0;
		while(v[i]<=a)
			i+=1;
		while(v[i]<=b)
			j+=1;
		cout<<sum<<'\n';
	}
	return 0;
}
