#include <bits/stdc++.h>
#define ll long long unsigned int
#define pb push_back
#define Max 1013
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

int gcd(int a,int b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}
 
int main()
{
	sieve();	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);		int q=gcd(a,b);
		int s=sqrt(q);	ll val=1; 
		for(int i=0;V[i]<=s && q>1;i++)
		{
			int ct=0;
			while(q%V[i]==0)
			{
				ct+=1;
				q/=V[i];
			}
			val*=(ct+1);
		}
		if(q>1)
			val*=2;
		printf("%lld\n",val);
	}
	return 0;
}
