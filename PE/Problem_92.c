#include "stdio.h"
#include "string.h"
int A[10000001];
int fun(int N)
{
	long int i,sum=0,temp;
	if(A[N]!=0)
		return A[N];
	if(N==1||N==89)
		return N;
	else
	{
		i=N;
		while(i)
		{
			temp=i%10;
			sum+=temp*temp;
			i/=10;
		}
		A[N]=fun(sum);
		return A[N];
	}
}
int main()
{
	long int ct,i,res;	ct=0;
	memset(A,0,sizeof(A));
	for(i=1;i<10000001;i++)
	{
		res=fun(i);
		if(res==89)
			ct++;
	}
	printf("%ld\n",ct);
return 0;
}