#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define bs binary_search
#define sz(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
#define FOREACH(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
typedef long long LL;
typedef vector <int> V;
typedef pair <int,int> P;
int A[10001];

int main()
{
	ios::sync_with_stdio(false);
	int t,a,b,n,m,i,G,H,g,h;	cin>>t;
	while(t--)
	{
		memset(A,0,sizeof(A));	V v[10001];
		cin>>m>>n;	H=G=0;	P p[m];
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			p[i]=mp(a,b);
		}
		sort(p,p+m);
		for(int i=0;i<m;i++)
		{
			A[p[i].first]+=1;	v[p[i].first].pb(p[i].second);
		}
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			if(A[a])
			{
				G+=1;
				if(bs(v[a].begin(),v[a].end(),b))
					H+=1;
				A[a]-=1;	
			}
		}
		cin>>g>>h;
		if(G>=g && H>=h)
			cout<<"Great"<<'\n';
		else if(G>=g && H<h)
			cout<<"Good"<<'\n';
		else
			cout<<":("<<'\n';
	}
	return 0;
}
