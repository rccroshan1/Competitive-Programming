#include <bits/stdc++.h>
using namespace std;
int A[2005]={0};
int dp(int val)
{
	if(val<0)
		return 9999;
	if(val==0)
		return 0;
	if(A[val])
		return A[val];
	else
	{
		int a=dp(val-1)+1;	int b=dp(val-5)+1;
		int c=dp(val-7)+1;	int d=dp(val-10)+1;
		A[val]=min( min (a,b) , min (c,d) );
		return A[val];
	}
}
int main()
{
	int T;
	cin>>T;	A[0]=0;	A[1]=1;
	while(T--)
	{
		int Q;
		cin>>Q;
		cout<<dp(Q)<<'\n';		
	}
return 0;
}
