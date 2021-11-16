def cb(x):
	return x**3
for i in range(20):
	x=i
	y=cb(x)
	if(y % 2 != 0):
		print y
	else:
		print x
