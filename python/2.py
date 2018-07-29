#Secuencia de fibonacci

suma = 0
x = 1
y = 2

while y <= 4*(10**6):
  if x % 2 == 0:
  	 suma += x
  if y % 2 == 0:
     suma += y
  x += y
  y += x

print(suma)