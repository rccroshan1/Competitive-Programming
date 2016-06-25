#include <bits/stdc++.h>
#define ll long long unsigned int
#define pb push_back
#define Max 710
#define Quant 500005
using namespace std;
typedef vector <ll> v;
typedef pair <int,int> p;
ll A[Max];	ll V[Max];
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
	V[0]=2;	int j=1;
	for(int i=3;i<=Max;i+=2)
	{
		if(A[i])
			V[j++]=i;;
	}
}

int main()
{
	sieve();	ios::sync_with_stdio(false);
	int t,n,i,j,ct;	cin>>t;
	while(t--)
	{
		cin>>n;	ll val=1,temp=n;	int s=sqrt(n);
		for(i=0;V[i]<=s && n>1;i++)
		{
			ct=0;
			while(n%V[i]==0)
			{
				n/=V[i];	ct+=1;
			}
			val*=(pow(V[i],ct+1)-1)/(V[i]-1);
		}
		if(n>1)
			val*=(1+n);
		cout<<val-temp<<'\n';
	}
	return 0;
}

