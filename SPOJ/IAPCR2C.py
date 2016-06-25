for j in xrange(int(raw_input())):
	n,k=map(int,raw_input().split());	A=[0]*100005;
	K=map(int,raw_input().split());	ct=0;
	for i in K:	A[i-1]+=1;
	if A[0] or A[1]:	ct+=1;
	if A[n-1] or A[n-2]:	ct+=1;
	for i in xrange(1,n-1):
		if A[i] or A[i-1] or A[i+1] :	ct+=1;
	st="Case "+str(j+1)+": "+str(ct);
	print st;
