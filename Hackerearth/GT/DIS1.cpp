#include <bits/stdc++.h>
using namespace std;
vector<int> Vec[1005];
bool Vis[1005]={false};
int Es[1005];
int val;	long int min_v;
void dfs(int i)
{
	Vis[i]=true;
	if(Es[i]<min_v)
	{	min_v=Es[i];	val=1; }
	else if(Es[i]==min_v)
		val+=1;
	for(int j=0;j<Vec[i].size();j++)
	{
		if(!Vis[Vec[i][j]])
			dfs(Vec[i][j]);
	}
}
int main()
{
	int N,K,a,b;
	cin>>N;
	for(int i=1;i<=N;i++)
		cin>>Es[i];
	cin>>K;
	while(K--)
	{
		cin>>a>>b;
		Vec[b].push_back(a);
		Vec[a].push_back(b);
	}
	int res=1;
	for(int i=1;i<=N;i++)
	{
		val=0;	 min_v=9999;
		if(!Vis[i])
		{
			dfs(i);
			res=(res*val)%1000000007;
		}
	}
	cout<<res<<'\n';
return 0;
}
