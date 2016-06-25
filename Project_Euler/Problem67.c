#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int B[100000];
int A[100000];
int main()
{
	int i,j,le,max_2,n,k=1;
	FILE *fp;
	fp=fopen("2.txt","r");
	for(i=1;i<=100;i++)
		for(j=1;j<=i;j++)
			fscanf(fp,"%d",&A[k++]);
	fclose(fp);
	i=1;	le=1;	j=1;
	memset(B,0,sizeof(B));
	B[0]=1;	B[1]=59;
	while(i<=5050)
	{
		while(j<=le)
		{
			B[i+le]=max(B[i+le],(B[i]+A[i+le]));
			B[i+le+1]=max(B[i+le+1],(B[i]+A[i+le+1]));
			i+=1;	j+=1;
		}
		j=1;	le+=1;
	}
	max_2=0;
	for(i=1;i<10000;i++)
	{
		if(max_2<B[i])
			max_2=B[i];
	}
	printf("%d",max_2);
return 0;
}