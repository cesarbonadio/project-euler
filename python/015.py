# El problema se puede resolver usando combinatorias
# En una matriz de dimension n*m, se sabe que no importa
# que camino se elija, siempre seran la misma cantidad
# de movimientos para la derecha y para abajo. Esto quiere
# decir que la ruta puede ser representada por una cadena
# de 0(Derecha) y 1(Abajo) de longitud n+m.
#
# Tenemos que saber cuantas veces se puede escribir 0
# en dicha cadena. Esto se debe a que si escribimos todos
# los 1 de cada camino posible, ya se sabe donde deben ir los
# 0. Esto se puede hallar mediante el coeficiente binomial:
#
#  |m+n|
#  | m |
#
# que es igual a (m+n)!/(m!*(m+n-m)!)
# y es igual a ((n+m)*((n+m)-1)*...*((n+m)-m+1))/(m!)
#
# Al ser la matriz de m = n se puede simplificar como binomial:
#
#  |2n|
#  |n |
#
# Que se puede simplificar como la productoria desde
# i = 1 a n de (n+i)/i
#
from functools import reduce
print(round(reduce(lambda x,y:x*y,[(20+i)/i for i in range(1,20+1)])))
