#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define LL long long int
#define Mod 1000000007
#define sz(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
#define clr(a,n) memset(a,n,sizeof(a))
#define FOR(a,n) for(int i=a;i<n;i++)
#define FORL(i,a,n) for(int i=a;i<n;i++)
#define fastio ios::sync_with_stdio(false)
#define REVFOR(i,a,n) for(int i=a;i>n;i--)
#define FOREACH(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
using namespace std;
typedef vector <int> V;
typedef pair <int,int> P;
map <string,int> M;
typedef stack <long int> S;
typedef priority_queue <int> PQ;
int A[105][105];

int main()
{
	fastio;
	int n,ct,m,s,qu;	string q,r;	cin>>n>>m;
	FORL(i,1,n+1)
		FORL(j,1,n+1)
		{
			if (i==j)	A[i][j]=0;
			else	A[i][j]=999999;
		}
	FOR(1,n+1)
	{
		cin>>q;	M[q]=i;
	}
	FOR(0,m)
	{
		cin>>q>>r>>s;
		A[M[q]][M[r]]=s;		A[M[r]][M[q]]=s;
	}
	FORL(k,1,n+1)
		FORL(i,1,n+1)
			FORL(j,1,n+1)
			{
				if (A[i][j] > ( A[i][k]+A[k][j] ) )
					A[i][j]=A[i][k]+A[k][j];
			}
	cin>>qu;
	FOR(0,qu)
	{
		cin>>q>>r;		cout<<A[M[q]][M[r]]<<'\n';
	}
	return 0;	
}
