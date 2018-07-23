# nada impresionante por aca.
# solo sumar los digitos de un factorial

def factorial(n):
 if (n == 0) or (n == 1): 
   	 return 1
 result = 1	 
 for i in range (1,n+1):
 	 result = result * i
 return result


def sum_digits(n):
	summ = 0
	d = 0
	while n!=0:
		 d = n%10
		 summ += d
		 n //= 10
	return summ	 


print(sum_digits(factorial(100)))