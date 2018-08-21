maxx = 0
maxx_count = 0

# Por listas es lento

for i in range (2,1000000):

	count = 1
	n = i

	while n!=1:
		if n%2 == 0:
			n/=2
		else:
			n = (3*n)+1
		count+=1		
	
	if (count>maxx_count):
		maxx = i
		maxx_count = count

print('Found: ',maxx,maxx_count)			