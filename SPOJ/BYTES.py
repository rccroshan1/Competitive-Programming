for _ in xrange(int(raw_input())):
	n=int(raw_input());	A,val,ct,come,go=[0]*100005,0,0,0,0;
	for i in xrange(n):
		a,b=map(int,raw_input().split())
		A[a]+=1;	A[b]-=1;
		come=min(come,a);	go=max(go,b);
	for i in xrange(come,go+1):
		ct+=A[i];		val=max(ct,val);
	print val
