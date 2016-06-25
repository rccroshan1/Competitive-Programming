#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define sz(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
#define FOREACH(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
typedef long long LL;
typedef vector <int> V;
typedef pair <int,int> p;

int main()
{
	ios::sync_with_stdio(false);
	LL t,n,ne,i,temp;	cin>>t;
	while(t--)
	{
		cin>>n;
		if(!(n&1))
		{
			temp=n;	i=ne=0;
			while(temp)
			{
				i+=1;	temp>>=1;
			}	i-=1;
			while(n)
			{
				ne|= (n&1)<<i;
				i-=1;	n>>=1;
			}
			cout<<ne<<'\n';
		}
		else
			cout<<n<<'\n';
	}
	return 0;
}
