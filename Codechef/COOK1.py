n=input();	A=map(int,raw_input().split());	s=sum(A);	c=A.count(1);	q=s-(2*c);
if c==n:	print n;
else:
	if q%2:	print q/2+1+c;
	else:	print q/2+c;
