#include <stdio.h>
#include <stdlib.h>

int main() {

	int suma = 0, x = 1, y = 2;

                    /*
                       Simplemente seguir la secuencia de Fibonacci 
                       usando dos numeros a la vez ( x e y) siendo x
                       siempre el término previo e y el próximo. Ver
                       si los elementos son divisibles entre 2 para poder
                       sumarlos.
                     */

	while ((y) <= 4000000) {
		if (x % 2 == 0) suma += x;
		if (y % 2 == 0) suma += y;
		x += y;
		y += x;
	}


	printf("%i\n",suma);
	system("pause");
	return 0;

}