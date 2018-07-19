def factorial(n):
 if (n == 0) or (n == 1): 
   return 1

 result = 1	 

 for i in range (1,n+1):
 	 result = result * i

 return result


def combination(n1,n2):
	return factorial(n1)/(factorial(n1-n2)*factorial(n2))


#Este problema se resuelve usando combinatorias
#
#  Si se tiene una poblacion de 70 pelotas
#  donde 20 son elegidas de una muestra
#  10 para cada color 
#
#  entonces hay que encontrar la probabilidad de
#  que NO salga un color en especifico, luego hallarle
#  el complemento (1-p(x=0)) y por simetria multiplicar
#  por la cantidad de colores que tenga el arcoiris
#  7(1-(p(x=0)))
#
#  donde p(x=0) =  ((10c0)*(60c20))/(70c20)
#  como 10c0 = 1
#  entonces p(x=0) = (60c20)/(70c20)

print(round(7*(1-(combination(60,20)/combination(70,20))),9))