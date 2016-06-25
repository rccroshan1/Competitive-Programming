#include <bits/stdc++.h>
#define M 1
#define F -1
#define U 0
using namespace std;
vector <int> V[2005];
short int Vis[2005];
int dfs(int i)
{
	bool res=true;
	for(int j=0;j<V[i].size();j++)
	{
		if(Vis[i]==Vis[V[i][j]])
			return false;
		if(Vis[V[i][j]]==U)
		{
			Vis[V[i][j]]=-Vis[i];
			res=res and dfs(i);
		}
	}
	return res;
}
int main()
{
	int T,N;	long int e;
	cin>>T;
	for(int k=1;k<=T;k++)
	{
		cin>>N>>e;
		for(int i=1;i<=N;i++)
		{
			V[i].clear();
			Vis[i]=0;
		}
		while(e--)
		{
			int a,b;
			cin>>a>>b;
			V[a].push_back(b);
			V[b].push_back(a);
		}
		bool flag=true;
		for(int i=1;i<=N;i++)
		{
			if(!Vis[i])
			{
				Vis[i]=M;
				flag=flag and dfs(i);				
			}
		}
		if(flag)
			cout<<"Scenario #"<<k<<":\nNo suspicious bugs found!\n";
		else
			cout<<"Scenario #"<<k<<":\nSuspicious bugs found!\n";
	}
return 0;
}
