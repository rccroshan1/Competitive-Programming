A,B,Z,M,Q=[0]*10009,[2],[0]*10009,1000000007,''
for i in xrange(3,101,2):
	if A[i]==0:
		for j in xrange(i*i,10009,i):
			A[j]=1;
for i in xrange(3,10009,2):
	if A[i]==0:
		B.append(i);
N=int(raw_input());	i=0;
while B[i]<=N:
	j,ct=B[i],0;	
	while j<=N:
		ct+=N/j;
		j*=B[i];
	Q+=str(B[i])+'^'+str(ct)+' '+'*'+' '
	i+=1
print Q[:-3]

