#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define LIMIT 500


int count_factors(int n) {

	/*método óptimo para poder contar los divisores de un número
	  hallar la raiz cuadrada de n y luego en el ciclo sumar 
	  2 en vez de uno cada vez que se encuentre un divisor*/

	int a = 0, k = sqrt(n);
	for (int i = 1; i < k; i++)
		if (n%i == 0)
			a += 2;
	if (n == int(k) * int(k))
		a--;
	return a;
}


int main() {

	int sum, j = 0;

	while (true) {
		sum = 0;
		++j;
		sum = (j*(j + 1)) / 2;
		if (count_factors(sum) > LIMIT) 
		break;
	}

	printf("%i\n", sum);

	system("pause");
	return 0;
}