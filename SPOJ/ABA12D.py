from math import sqrt
import random
def Fermat(n):
	if n>1 :
		for times in xrange(5):
			randNum=random.randint(1,n-1)
			if pow(randNum,n-1,n)!=1 :
				return False
		return True
	return False
A,B,C,D=[1]*1000001,[0]*1000001,[2],[]
for i in xrange(3,1001,2):
	if A[i]:
		for j in xrange(i*i,1000001,i):
			A[j]=0
for i in xrange(3,1000001):
	if A[i]:
		C.append(i)
print A,C
for i in xrange(1,1000001):
	j,temp,val,sq=0,i,1,sqrt(i);
	while temp>1 and C[j]<=sq:
		ct=0;
		while temp%C[j]==0:
			ct+=1;
			temp/=C[j];
		val*=(pow(C[j],ct+1)-1)/(C[j]-1)
		j+=1;
	if temp>1:
		val=val*(temp+1)
	B[i]=val
	#if Fermat(val):
	#	D.append(i)
print B
