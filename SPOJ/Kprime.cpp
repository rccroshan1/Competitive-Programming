#include <bits/stdc++.h>
#define ll long long unsigned int
#define pb push_back
#define Max 100005
using namespace std;
typedef vector <int> v;
typedef pair <int,int> p;
ll A[Max];	v D[11];

void sieve()
{
	for(int i=2;i<=Max;i++)
	{
		A[i]=0;
	}
	for(int i=2;i<=Max;i++)
	{
		if(A[i]==0)
		{
			for(int j=i;j<=Max;j+=i)
				A[j]+=1;
		}
	}
	for(int i=2;i<=Max;i++)
	{
		D[A[i]].pb(i);
	}
	D[5].pb(100009);
}

int main()
{
	sieve();	ios::sync_with_stdio(false);
	int t,a,b,k,ct;	cin>>t;
	while(t--)
	{
		cin>>a>>b>>k;	int i=0,j=0;
		while(D[k][i]<a)
			i+=1;
		while(D[k][j]<=b)
			j+=1;
		j-=1;
		cout<<j-i+1<<'\n';
	}
	return 0;
}
