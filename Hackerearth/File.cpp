#include <bits/stdc++.h>
using namespace std;
char Q[29],S[29],X[29];
int main()
{
	FILE *fp;
	scanf("%s",X);
	fp=fopen(X,"r");
	while(fscanf(fp,"%s",Q)!=EOF)	
	{
		fscanf(fp,"%s",S);
		int q=strlen(Q);	int s=strlen(S);	int i=0;
		bool flag=false;
		while(i<q)
		{
			if(Q[i]=='F' || S[i]=='F')
			{
				if(flag==true)
				{	
					cout<<'\n';
					break;
				}
				else
				{
					if(Q[i]=='F')
					{
						cout<<'|';	cout<<S[i];
					}
					else
					{
						cout<<Q[i];	cout<<'|';
					}
					flag=true;
				}
			}
			else
			{
				cout<<Q[i]<<S[i];
			}
			i++;
		}
	}
return 0;
}
