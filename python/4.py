def ispalindrome(n):

	if n%11!=0:
		return False

	aux = n
	twirled = 0
	digit = 0

	while aux!=0:
		digit = aux % 10
		twirled = (twirled*10)+digit
		aux //= 10

	if twirled == n:
		return True
	else:
		return False


product = 0
# Para evitar repeticiones 
# como la multiplicacion es conmutativa
# el rango de búsqueda de b se reduce de a a 1000

for a in range (100,1000,+1):
	for b in range (a,1000,+1):
		if ispalindrome(a*b)==True:
			if (a*b) > product:
				product = a*b

print(product)
