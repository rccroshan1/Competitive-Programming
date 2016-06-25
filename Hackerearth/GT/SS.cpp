    #include <bits/stdc++.h>
    using namespace std;
    vector<int> V[100005];
    int Vis[100005];
    long long Val[100005],val2;
    void dfs(int i)
    {
    	Vis[i]=1;	val2+=1;
    	for( int j=0;j<V[i].size();j++)
    	{
    		int q=V[i][j];
    		if(!Vis[q])	dfs(q);
    	}
    }
    int main()
    {
    	int T,N,M,A,B,Q;
    	scanf("%d",&T);
    	while(T--)
    	{
    		scanf("%d %d",&N,&M);
    		for(int i=1;i<=N;i++)
    		{
    			V[i].clear();
    		}
    		memset(Vis,0,sizeof(Vis));
    		while(M--)
    		{
    			scanf("%d %d",&A,&B);
    			V[A].push_back(B);
    			V[B].push_back(A);
    		}
    		long long int val=1,temp;
    		for(int i=1;i<=N;i++)
    		{
    			if(!Vis[i])
    			{
    				val2=0;	dfs(i);
				if (val2>1)
				{	temp=(val2*(val2-1))/2;		val=(val*temp)%1000000007;	}
    			}
    		}
    		printf("%lld\n",val);
    	}
    return 0;
    }
