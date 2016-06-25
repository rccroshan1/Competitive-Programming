#include <bits/stdc++.h>
using namespace std;
vector<int> Vec[100005];
bool Vis[100005]={false};
void dfs(int i)
{
	Vis[i]=true;
	for(int j=0;j<Vec[i].size();j++)
	{
		if(!Vis[Vec[i][j]])
			dfs(Vec[i][j]);
	}
}
int main()
{
	int N,K,a,b;
	cin>>N;	cin>>K;
	while(K--)
	{
		cin>>a>>b;
		Vec[b].push_back(a);
		Vec[a].push_back(b);
	}
	int val=0;
	for(int i=1;i<=N;i++)
	{
		if(!Vis[i])
		{
			dfs(i);	val++;
		}
	}
	cout<<val<<'\n';
return 0;
}
