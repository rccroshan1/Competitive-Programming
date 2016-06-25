#include <bits/stdc++.h>
using namespace std;
int A[100005],size[100005];
int parent(int a)
{
	if(A[a]!=a)
		A[a]=parent(A[a]);
	return A[a];
}
void merge(int a,int b)
{
	int x=parent(a);
	int y=parent(b);
	if(x==y)
		return ;
	if(size[x]>size[y])
	{
		size[x]+=size[y];
		A[y]=x;
	}
	else
	{
		size[y]+=size[x];
		A[x]=y;
	}
}
int main()
{
	int Q,N;
	cin>>N>>Q;
	for(int i=1;i<=N;i++)
	{
		A[i]=i;	size[i]=1;
	}
	while(Q--)
	{
		int a,b;
		cin>>a>>b;
		merge(a,b);
		int ma=*max_element(size+1,size+N+1);
		int mi=*min_element(size+1,size+N+1);
		if(ma==N)
			cout<<"0\n";
		else
			cout<<ma-mi<<'\n';
	}
return 0;
}
