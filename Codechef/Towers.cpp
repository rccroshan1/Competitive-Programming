#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define sz(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
#define FOREACH(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
typedef long long LL;
typedef vector <int> V;
typedef pair <int,int> P;
typedef map <string,int> M;
typedef stack <long int> S;

int main()
{
	ios::sync_with_stdio(false);
	int t,n;	cin>>t;	long int Rear[100005];
	while(t--)
	{
		cin>>n;	V v(n);			long int val=0;	long int ind=0;
		memset(Rear,0,sizeof(Rear));
		for(int i=0;i<n;i++)			cin>>v[i];	S r;
		r.push(v[n-1]);	Rear[n-1]=0;	
		for(int i=n-2;i>=0;i--)
		{
			Rear[i]=r.size();
			while(!r.empty() && r.top()<=v[i])
				r.pop();
			r.push(v[i]);
		}
		for(int i=0;i<n;i++)
			cout<<Rear[i]<<" ";
		cout<<'\n';
	}
	return 0;	
}
