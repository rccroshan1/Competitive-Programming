from math import sqrt;
def chck(n):
    l,i=len(A),0;
    while i<l:
        val=n;
        while i<l and val>0:   val-=A[i];   i+=1;
        if val!=0:   return 0;
    return 1;

N=input();  A=map(int,raw_input().split()); s=sum(A); sq=int(sqrt(s));  v=[];
for i in xrange(1,sq+1):
    if s%i==0:
        if chck(i):    v.append(i);
        if chck(s/i):  v.append(s/i);
v.sort();
for i in v: print i,
