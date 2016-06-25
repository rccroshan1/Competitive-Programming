for _ in xrange(int(raw_input())):
	q=raw_input();
	if q==q[::-1]:
		print "YES"
	else:
		print "NO"
