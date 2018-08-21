
# Solución espantosa para fuerza bruta.
# Contar los digitos de n mediante str en la secuencia
# de fibonacci hasta que sea 1000		

n = 1000
x = 1
y = 1
i = 0

while True:
	i += 1
	if len(str(x))==n:
		break
	i += 1
	if len(str(y))==n:
		break	
	x += y
	y += x
 
print(i)