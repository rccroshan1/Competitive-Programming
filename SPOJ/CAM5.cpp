#include <bits/stdc++.h>
using namespace std;
vector <int> V[100005];
bool Vis[100005]={false};
void dfs(int i)
{
	Vis[i]=true;
	for(int j=0;j<V[i].size();j++)
	{
		if(!Vis[V[i][j]])
			dfs(V[i][j]);
	}
}
int main()
{
	int T,e;
	cin>>T;
	while(T--)
	{
		int N,e;
		cin>>N>>e;
		for(int i=0;i<N;i++)
		{
			V[i].clear();
			Vis[i]=false;
		}			
		while(e--)
		{
			int a,b;
			cin>>a>>b;
			V[a].push_back(b);
			V[b].push_back(a);
		}
		int val=0;
		for(int i=0;i<N;i++)
		{
			if(!Vis[i])
			{
				dfs(i);
				val++;
			}
		}
		cout<<val<<'\n';
	}
return 0;
}
