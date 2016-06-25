#include "stdio.h"
#include "string.h"
#include "math.h"
int A[6965];
int B[48000];
int isabun(int N)
{
	int sum=0,j;
	for(j=2;j<=sqrt(N);j++)
	{
		if(N%j==0)
		{
			sum+=j;
			sum+=N/j;
		}
	}
	sum+=1;
	if((j-1)*(j-1)==N)
		sum-=(j-1);
	if(sum>N)
		return 1;
	else
		return 0;
}
int main()
{
	int i,j,k=0,temp;
	long int sum=0;
	for(i=12;i<=28123;i++)
	{
		if(isabun(i))
			A[k++]=i;
	}
	for(i=0;i<24000;i++)
		B[i]=0;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			temp=A[i]+A[j];
			if(temp<=28123)
				B[temp]=1;
		}
	}
	for(i=1;i<=28123;i++)
	{
		if(!B[i])
			sum+=i;
	}
	printf("%ld\n",sum);
	return 0;
}