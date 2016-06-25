#include <bits/stdc++.h>
#define LL long long int
using namespace std;
typedef pair< int, int > pii;
const int MAX = 100005;
const int INF = 0x3f3f3f3f;
LL A[MAX],p;

vector< pii > G[MAX];
int d[MAX];
     
void dijkstra(int start)
{
	int u, v, i, c, w;     
        priority_queue< pii, vector< pii >, greater< pii > > Q;
        memset(d, 0x3f, sizeof d);
        Q.push(pii(0, start));
        d[start] = 0;
	if(A[0]==0)	return;
        while(!Q.empty()) 
	{
            u = Q.top().second; 
            c = Q.top().first; 
            Q.pop(); 
            if(d[u] < c) continue;
           
            for(i = 0; i < G[u].size(); i++)
	    {
                v = G[u][i].first;
                w = G[u][i].second;
                if(d[v] > d[u] + w) 
		{
		    if(A[v]!=(d[u]+w)%p)
		    {
	                	d[v] = d[u] + w;	    Q.push(pii(d[v], v));
		    }
                }
            }
        }
}
     
int main() 
{
	LL wt,temp;	int n,m,a,b;
	scanf("%d %d %lld",&n,&m,&p);
	for(int i=0;i<n;i++)
	{
		G[i].clear();	cin>>temp;	A[i]=temp%p;
	}
	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>wt;
		G[a].push_back(pii(b,wt));
	}
	dijkstra(0);
	if(d[n-1]==INF)
		cout<<-1<<'\n';
	else
		cout<<d[n-1]<<'\n';
        return 0;
    }
