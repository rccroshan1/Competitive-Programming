#include "stdio.h"
#include "time.h"
#include "math.h"
#include "string.h"
#define ll long long int
int A[10000001];
ll B[1000000];
int main()
{
	time_t start,end;
	start=clock();
	ll i,j,val,sq,n,k=0,z,fl,res;
	for(i=0;i<=10000001;i++)
		A[i]=1;
	A[1]=0;
	for(i=2;i<=10000;i++)
	{
		if(A[i])
		{
			for(j=2*i;j<=10000000;j+=i)
			{
				A[j]=0;
			}
		}
	}
	for(i=0;i<=10000001;i++)
	{
		if(A[i])
			B[k++]=i;
	}
	j=0;
	for(i=9;i<=10000000;i+=2)
	{
		if(A[i]==1)
			continue;
		fl=0;
		while(B[j]<i)
		{
			j++;
		}
		z=j-1;
		while(z>=0)
		{
			res=i-B[z];
			res/=2;
			val=sqrt(res);
			if(val*val==res)
			{
				fl=1;
				break;
			}
			z--;
		}
		if(fl==0)
		{
			printf("%llu\n",i);
		}
	}
	end=clock();
	printf("%lf\n",(double)(end-start)/CLOCKS_PER_SEC);
return 0;
}