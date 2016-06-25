#include <bits/stdc++.h>
#define ll long long unsigned int
#define pb push_back
#define Max 5000105
using namespace std;
typedef vector <int> v;
typedef pair <int,int> p;
ll A[Max];	v V;

void sieve()
{
	for(int i=3;i<=Max;i+=2)
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
	A[2]=1;	V.pb(2);
	for(int i=3;i<=Max;i+=2)
	{
		if(A[i])
			V.pb(i);
	}
}

int main()
{
	sieve();	ios::sync_with_stdio(false);
	int t,i,j,k;	cin>>t;
	while(t--)
	{
		ll a,b,sum=0;	cin>>a>>b;	i=j=0;
		while(V[i]<a)
			i+=1;
		while(V[j]<=b)
			j+=1;
		j-=1;
		for(int k=i;k<=j;k++)
			sum+=V[k];
		cout<<sum<<'\n';
	}
}
