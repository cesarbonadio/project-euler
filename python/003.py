def isprime(x):
	if x == 1 :
		return False

	if x == 2 or x == 3 or x == 5 or x ==7 :
		return True

	if x%2 == 0 or x%3 == 0 or x%5 == 0 or x%7 == 0:
		return False

	return True


num = 600851475143
maxx = 0

for i in range (1,num+1,+1):
	if num==1:
		break
	if num%i == 0 :
		if isprime(i):
			maxx = i
			num /= i
			

print (maxx)