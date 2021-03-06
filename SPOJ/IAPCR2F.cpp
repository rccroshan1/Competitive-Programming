#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define LL long long int
#define Mod 1000000007
#define sz(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
#define clr(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define fastio ios::sync_with_stdio(false)
#define REVFOR(i,a,n) for(int i=a;i>n;i--)
#define FOREACH(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
using namespace std;
typedef vector <int> V;
typedef pair <int,int> P;
typedef map <string,int> M;
typedef stack <long int> S;
typedef priority_queue <int> PQ;
V v[500005];	int Vis[1005],A[1005],val;

void dfs(int u)
{
	Vis[u]=1;	val+=A[u];
	for(int i=0;i<(v[u].size());i++)
	{
		int q=v[u][i];	
		if(!Vis[q])		dfs(q);
	}
}

int main()
{
	fastio;
	int n,ct,t,m,wt,a,b;	cin>>t;
	FOR(k,0,t)
	{
		cin>>n>>m;	clr(Vis,0);	V vc;	ct=0;
		FOR(i,1,n+1)	
		{
			v[i].clear();	cin>>A[i];
		}
		FOR(i,0,m)
		{
			cin>>a>>b;
			v[a].pb(b);	v[b].pb(a);
		}
		FOR(i,1,n+1)
		{
			if(!Vis[i])
			{
				val=0;	dfs(i);
				vc.pb(val);	ct+=1;
			}
		}
		cout<<"Case "<<k+1<<": "<<ct<<'\n';
		sort(vc.begin(),vc.end());
		FOR(i,0,sz(vc))	cout<<vc[i]<<' ';
		cout<<'\n';
	}
	return 0;	
}
