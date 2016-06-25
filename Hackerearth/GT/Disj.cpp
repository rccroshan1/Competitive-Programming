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
int A[100005];

int root(int u)
{
	while(A[u]!=u)
		u=A[u];
	return u;
}

int main()
{
	fastio;
	int n,t,q,ch,root_a,root_b,a,b;	cin>>n>>q;
	for(int i=0;i<=n;i++)	
		A[i]=i;
	while(q--)
	{
		cin>>ch;
		if(ch==1)
		{
			cin>>a>>b;
			root_b=root(b);	root_a=root(a);
			A[root_a]=root_b;
		}	
		else if(ch==2)
		{
			cin>>a;	int temp=a;
			root_a=root(a);	A[root_a]=temp;
		}
		else
		{
			cin>>a;	root_a=root(a);
			cout<<root_a<<'\n';
		}
	}
	return 0;	
}
