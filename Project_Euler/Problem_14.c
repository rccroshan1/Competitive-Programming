#include "stdio.h"
#include "string.h"
#include "time.h"
#define ll long long unsigned int
ll A[100000001];
ll fun(ll N)
{
	if(N==1)
		return A[N];
	if(N>100000000)
	{
		if(N%2)
			return 1+fun(N*3+1);
		else
			return 1+fun(N/2);	
	}
	else
	{
		if(A[N])
			return A[N];
		else
		{
			if(N%2)
			{
				A[N]=1+fun(N*3+1);
			}
			else
			{	
				A[N]=1+fun(N/2);
			}
		return A[N];
		}
	}
}
int main()
{
	time_t end,start;
	start=clock();
	ll ind,max=0,i,len;
	memset(A,0,sizeof(A));
	A[1]=0;
	for(i=2;i<=1000000;i++)
	{
		len=fun(i);
		if(len>max)
		{
			max=len;
			ind=i;
		}
	}
	printf("%llu %llu\n",ind,max);
	end=clock();
	printf("%lf\n",(double)(end-start)/CLOCKS_PER_SEC);
return 0;
}