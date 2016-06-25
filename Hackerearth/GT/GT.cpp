#include <bits/stdc++.h>
using namespace std;
vector <int> V[1005];
bool Vis[1005]={false};
int val;
void dfs(int i)
{
	Vis[i]=true; val+=1;
	for(int j=0;j<V[i].size();j++)
	{
		int q=V[i][j];
		if(!Vis[q])
			dfs(q);
	}
}
int main()
{
	int N,D;
	cin>>N>>D;
	for(int i=1;i<=N;i++)
		V[i].clear();
	while(D--)
	{
		int a,b;
		cin>>a>>b;
		V[b].push_back(a);
	}
	int res=1009;
	for(int i=1;i<=N;i++)
	{
		val=0;
		if(!Vis[i])
		{
			dfs(i);
			res=min(val,res);
		}
	}
	cout<<res<<'\n';	
return 0;
}
