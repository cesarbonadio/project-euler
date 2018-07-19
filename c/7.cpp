#include <stdio.h>
#include <stdlib.h>

#define LIMIT 10001

int isprime(int x) {

	/*
	 Optimización para saber si un número es primo.
	 Basado en el algoritmo ASK (Agrawal–Kayal–Saxena primality test)
	 pero con una cierta mejora para no comparar dos numeros en el mismo ciclo
	*/


	if (x <= 1) return 0;

	else if (x <= 3) return 1;

	else if ((x % 2 == 0) || (x % 3 == 0)) return 0;

	int i = 5;
	while (i * i <= x) {
		if ((x % i == 0) || (x % (i + 2) == 0)) return 0;
		i = i + 6;
	}

	return 1;
}


int main() {

	/*
	 Simplemente contar cada vez que se ecuentre un primo.
	 Lo más pesado de este problema es optimizar la funcion
	 isprime.
	*/

	long int i = 0; int cont = 0;

	while (cont < LIMIT) {
		i++;
		if (isprime(i)) cont++;
	}

	printf("%i\n", i);
	system("pause");
	return 0;
}