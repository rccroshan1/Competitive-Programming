#include <bits/stdc++.h>
using namespace std;
vector <int> V[100005];
stack <int> S;
bool Vis[100005]={false};
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
				S.push(i);
				while(!S.empty())
				{
					for(int j=0;j<V[i].size();j++)
						S.push(V[i][j])
				}
			}
		}
		cout<<val<<'\n';
	}
return 0;
}
