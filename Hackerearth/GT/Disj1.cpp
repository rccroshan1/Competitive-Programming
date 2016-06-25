#include <bits/stdc++.h>
using namespace std;
typedef pair <int,int> p;
set <p> s;
int A[100005],size[100005],X[100005];
int parent(int a)
{
	while(A[a]!=a)
		a=A[a];
	return a;
}
void merge(int a,int b)
{
	int x=parent(a);
	int y=parent(b);
	if(x==y)
		return ;
	s.erase(p(size[x],x));	s.erase(p(size[y],y));
	A[x]=y;	size[y]+=size[x];
	s.insert(p(size[y],y));
}
int main()
{
	int Q,N;
	scanf("%d %d",&N,&Q);	memset(X,0,sizeof(X));
	for(int i=0;i<=N;i++)
	{
		A[i]=i;	size[i]=1;	s.insert(p(1,i));
	}
	while(Q--)
	{
		int a,b;
		cin>>a>>b;		merge(a,b);
		set<p>::iterator r=s.end();	r--;	set<p>::iterator d=s.begin();
		cout<<(*r).first - (*d).first<<'\n';
	}
return 0;
}
