num=''

#    185185 esel número de iteraciones de "i" que necesitamos concatenar para alcanzar un string
#    de longitud 1000000
#
#   -9 lugares para números de 1 dígito
#   -180 lugares para números de 2 dígitos
#   -2700 lugares para números de 3 dígitos
#   -36000 lugares para números de 4 dígitos
#   -450000 lugares para números de 5 dígitos
#   -5400000 lugares para números de 6 dígitos pero
#
#    si necesitamos 1000000 y ya tenemos 9 + 180 + 2700 + 36000 + 450000 = 488889
#
#    de los 6 números de dígitos, solo necesitamos: (1000000-488889) /6≈85185.1666 ...
#
#    El número máximo de 5 dígitos es 99999 + 85185.1666 ... = 185184.16666 ... ≈185185
#
#    de esa manera, el último índice de la cadena sería exactamente 1000005
#
#    En realidad, dx1000000 es el primer dígito de 185185 , es decir, el 1
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

