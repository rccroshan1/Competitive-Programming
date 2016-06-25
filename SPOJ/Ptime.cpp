#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
vector <int> V;	int A[10009];
void pre()
{
	V.push_back(2);
	for(int i=0;i<=10009;i++)
		A[i]=1;
	for(int i=3;i<=101;i+=2)
	{
		if(A[i])
		{
			for(int j=i*i;j<=10009;j+=i)
				A[j]=0;
		}
	}
	for(int i=3;i<=10009;i+=2)
	{
		if(A[i])
			V.push_back(i);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	pre();	int t,i,j,ct,n,Z[10009];
	cin>>n;	i=0;
	while(V[i]<=n)
	{
		j=V[i];	ct=0;
		while(j<=n)
		{
			ct+=n/j;	j*=V[i];
		}
		i+=1;
		cout<<
	}
	cout<<val<<'\n';
	}
return 0;
}
