A,B,Z,M=[0]*50099,[2],[0]*50099,1000000007
for i in xrange(3,225,2):
	if A[i]==0:
		for j in xrange(i*i,50099,i):
			A[j]=1;
for i in xrange(3,50099,2):
	if A[i]==0:
		B.append(i);
for _ in xrange(int(raw_input())):
	N=int(raw_input());	i,Z,val=0,[0]*50099,1;
	while B[i]<=N:
		j=B[i];	
		while j<=N:
			Z[B[i]]+=N/j;
			j*=B[i];
		val=(val*(Z[B[i]]+1))%M;	i+=1;
	print val
#		while j<Z[B[i]]:
#			#temp_val=(temp_val*B[i])%M
#			temp_val*=B[i];
#			temp=(temp+temp_val)%M
#			j+=1;
#		val=(val*temp)%M
#		i+=1
#	print val
