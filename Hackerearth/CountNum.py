k,t=map(int,raw_input().split());	A=map(int,raw_input().split());	B=[];
for i in xrange(1,1<<k):
	lcm=1;
	for j in xrange(k):
		if i&(1<<j):	lcm*=A[j]
	if lcm not in A:	B.append(lcm);
for _ in xrange(t):
	a,b=map(int,raw_input().split());	val,val_2=0,0;
	for i in A:	val+=b/i;	val_2+=(a-1)/i;
	for i in B:	val-=b/i;	val_2-=(a-1)/i;
	print val-val_2;


