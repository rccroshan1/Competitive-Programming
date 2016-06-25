#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
vector <int> V;	int A[50100];
void pre()
{
	V.push_back(2);
	for(int i=0;i<=50099;i++)
		A[i]=1;
	for(int i=3;i<=225;i+=2)
	{
		if(A[i])
		{
			for(int j=i*i;j<=50099;j+=i)
				A[j]=0;
		}
	}
	for(int i=3;i<=50099;i+=2)
	{
		if(A[i])
			V.push_back(i);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	pre();	int t,i,j,ct,n,Z[50099];
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long unsigned int val=1;i=0;
		while(V[i]<=n)
		{
			j=V[i];	ct=0;
			while(j<=n)
			{
				ct+=n/j;	j*=V[i];
			}
			val=(val*(ct+1))%M;	i+=1;
		}
		cout<<val<<'\n';
	}
return 0;
}
