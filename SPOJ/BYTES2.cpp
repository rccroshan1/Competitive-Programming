#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define sz(v) ((int)(v).size())
#define FOR(n) for(int i=0;i<n;i++)
#define abs(x) ((x) > 0 ? (x) : -(x))
#define FOREACH(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
typedef long long LL;
typedef vector <int> V;
typedef pair <int,int> P;
int A[100005];

int main()
{
	ios::sync_with_stdio(false);
	int t,max_v,n,a,b,ct,min_c,max_g;	cin>>t;
	while(t--)
	{
		cin>>n;
		FOR(100005)
			A[i]=0;
		max_v=ct=min_c=max_g=0;
		FOR(n)
		{
			cin>>a>>b;	min_c=(a<min_c)?a:min_c;		max_g=(b>max_g)?b:max_g;	
			A[a]+=1;	A[b]-=1;
		}
		for(int i=min_c;i<=max_g;i++)
		{
			ct+=A[i];
			max_v=(ct>max_v)?ct:max_v;
		}
		cout<<max_v<<'\n';
	}
	return 0;
}
