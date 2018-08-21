# Esta solucion solo revisa a fuerza bruta los numeros impares
# ningun número par puede ser palíndromo en binario.
# si aplicamos divisiones sucesivas, todo numero par debe terminar
# con un "0" y absolutamente todo numero debe empezar con un "1".
#
# Ya ahí se descartan los pares

print(sum(i for i in range(1,10**6,+2) if str(i)==str(i)[::-1] and bin(i)[2:]==bin(i)[2:][::-1]))
