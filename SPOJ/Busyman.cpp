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

int main()
{
	ios::sync_with_stdio(false);
	int t,a,b,n;	cin>>t;
	while(t--)
	{
		cin>>n;	P p[n+1];	int ct=0;	int end=0;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;	p[i]=mp(b,a);
		}
		sort(p,p+n);
		for(int i=0;i<n;i++)
		{
			if (p[i].second>=end)
			{
				ct+=1;	end=p[i].first;
			}
		}
		cout<<ct<<'\n';
	}
	return 0;
}
