#!/usr/bin/env python
# -*- coding: utf-8 -*-

num=''

#    185185 esel numero de iteraciones de "i" que necesitamos concatenar para alcanzar un string
#    de longitud 1000000
#
#   -180 lugares para numeros de 2 digitos
#   -2700 lugares para numeros de 3 digitos
#   -36000 lugares para numeros de 4 digitos
#   -450000 lugares para numeros de 5 digitos
#   -5400000 lugares para numeros de 6 digitos pero
#
#    si necesitamos 1000000 y ya tenemos 9 + 180 + 2700 + 36000 + 450000 = 488889
#
#    de los 6 numeros de digitos, solo necesitamos: (1000000-488889) /6≈85185.1666 ...
#
#    El numero maximo de 5 digitos es 99999 + 85185.1666 ... = 185184.16666 ... ≈185185
#
#    de esa manera, el ultimo indice de la cadena seria exactamente 1000005
#
#    En realidad, dx1000000 es el primer digito de 185185 , es decir, el 1
#

for i in range (185185+1):
 	num += str(i)

print(int(num[1])*\
	  int(num[10])*\
	  int(num[100])*\
	  int(num[1000])*\
	  int(num[10000])*\
	  int(num[100000])*\
	  int(num[1000000]))\

