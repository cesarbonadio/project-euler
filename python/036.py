def ispalindrome(n):
	return str(n) == str(n)[::-1]


# Esta solucion solo revisa a fuerza bruta los numeros impares
# ningun número par puede ser palíndromo en binario.
# si aplicamos divisiones sucesivas, todo numero par debe terminar
# con un "0" y absolutamente todo numero debe empezar con un "1".
#
# Ya ahí se descartan los pares

summ = 0
for i in range (1,1000000,+2):
	if ispalindrome(i) and ispalindrome(bin(i)[2::]):
		summ += i

print(summ)	
