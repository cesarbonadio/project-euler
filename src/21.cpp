#include <stdio.h>
#include <stdlib.h>


int is_amicable(int n) {

	/*Encontrar la suma de los divisores de a ( en este caso n)
	  Luego convertir b en la suma de los divisores de n
	   y hallar la suma de los divisores de b*/

	int suma1 = 0, suma2 = 0;

	for (int i = 1; i < n; i++)
		if (n%i == 0)
			suma1 += i;

	/*
	 Retorno falso si n == suma1 para descartar. 
	 Ya que a debe ser distinto de b para los numeros amigables
	*/

	if (n == suma1) return 0;

	for (int j = 1; j < suma1; j++)
		if (suma1%j == 0)
			suma2 += j;

	if (n == suma2) return 1;
	else return 0;
}


int main() {
	int suma = 0;
	for (int i = 1; i <= 10000; i++)
		if (is_amicable(i))
			suma += i;

	printf("%i\n", suma);
	system("pause");
	return 0;
}