from math import sqrt
A=[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331];	B,z=[],0;
for i in xrange(30,100001):
	temp,j,ct=i,0,0;
	while temp>1 and A[j]<sqrt(temp):
		if temp%A[j]==0:
			ct+=1;
			while temp%A[j]==0:
				temp/=A[j];
		j+=1;
		if ct>=3:
			break
	if temp!=1:
		ct+=1;
	if ct>=3:
		z+=1;
		B.append(i)	
	if z>1001:
		break
print B
#for _ in xrange(int(raw_input())):
#	print B[int(raw_input())-1]
