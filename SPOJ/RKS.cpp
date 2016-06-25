#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define LL long long int
#define Mod 1000000007
#define sz(v) ((int)(v).size())
#define clr(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define fastio ios::sync_with_stdio(false)
#define REVFOR(i,a,n) for(int i=a;i>n;i--)
#define FOREACH(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
using namespace std;
typedef vector <pair< int,int> > V;
typedef pair <int,int> P;
typedef pair <int, pair<int,LL> > PP;
typedef map <LL,int> M;
typedef stack <long long int> S;
typedef set <LL> ST;
typedef priority_queue <int> PQ;

int main()
{
	fastio;	int n;	LL c,tmp;
	M m,Fc;	ST s;	PP p[1000],q;
	cin>>n>>c;
	FOR(i,0,n)
	{
		cin>>tmp;		s.insert(tmp);	m[tmp]+=1;
		if(m[tmp]==1)
		{
			Fc[tmp]=i+1;
		}
	}
	int j=0;
	FOREACH(i,s)
	{
		p[j++]=mp(-(m[*i]),mp(Fc[*i],*i));
	}
	sort(p,p+j);
	FOR(i,0,j)
	{
		q=p[i];
		FOR(x,0,-q.first)
			cout<<q.second.second<<' ';
	}
}
