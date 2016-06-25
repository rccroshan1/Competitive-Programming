import random
def Prime(n):
	if n>1 :
		for times in xrange(5):
			randNum=random.randint(1,n-1)
			if pow(randNum,n-1,n)!=1 :
				return False
		return True
	return False
ct=4;
for i in xrange(11,1000000,2):
    temp=str(i);	temp=temp[-1]+temp[:-1];  flag=1;
    while str(i)!=temp:
        if not Prime(int(temp)):    flag=0; break;
        temp=temp[-1]+temp[:-1];
    if flag and Prime(i):   ct+=1;
print ct;