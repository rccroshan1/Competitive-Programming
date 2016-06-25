

    #include <bits/stdc++.h>
    #define _ ios_base::sync_with_stdio(false);cin.tie(0);
    using namespace std;
    #define pb push_back
    #define pob pop_back
    #define pf push_front
    #define pof pop_front
    #define mp make_pair
    #define all(a) a.begin(),a.end()
    typedef unsigned long long int uint64;
    typedef long long int int64;
     
    int64 stone[100005];
    bool chck(int64 dist,int64 n,int64 k){
    	int64 req=0,cur=0,pre=0;
    	
    	for(int i=0;i<n;i++){
    		while((cur!=n)&&(stone[cur]-stone[pre]<=dist))
    		cur++;
    		req++;
    		if(cur==n)
    		break;
    		pre=cur-1;
    	}
    	if(cur!=n)
    	return false;
    	if(req<=k)
    	return true;
    	return false;
    }
    int main()
    {
    	int64 t,n,k,i;
    		cin>>n>>k;
    		for(i=0;i<n;i++)
    		cin>>stone[i];
    		
    		int64 lo=1,hgh=1e18,ans=-1;
    		
    		while(lo<=hgh)
		{
    			int64 mid=(lo+hgh);
    			mid/=2;
    			if(chck(mid,n,k)){
    				ans=mid;
    				hgh=mid-1;
    			}
    			else{
    				lo=mid+1;
    			}
    		}
    		cout<<ans<<endl;
    	return 0;
    }


