#include <bits/stdc++.h>
#define ll long long unsigned int
#define pb push_back
#define Max 32000
using namespace std;
typedef vector <int> V;
typedef pair <int,int> P;
ll A[Max];	V v;
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
			for(int j=i*i;j<=Max;j+=2*i)
				A[j]=0;
		}
	}
	v.pb(2);
	for(int i=3;i<=Max;i+=2)
	{
		if(A[i])
			v.pb(i);
	}
}

int main()
{
	sieve();	ll a,b,c,d;	int t,ct;
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;	int s=v.size();	int n=sqrt(a);	
		for(int i=0;i<)
	}
	return 0;
}
