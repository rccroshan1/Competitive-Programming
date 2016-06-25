for _ in xrange(int(raw_input())):
	N,K=map(int,raw_input().split());	val=99999999999;
	A=map(int,raw_input().split());	A.sort();
	for i in xrange(0,N-K+1):
		val=min(val,A[i+K-1]-A[i]);
	print val
