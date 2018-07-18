#include <stdio.h>
#include <stdlib.h>

int main() {

	int suma = 0;

                   /* Simplemente recorrerse los enteros 
                        del 1 al 1000 y ver cuales son multiplos de 3 o 5
                        para sumarlos
                    */

	for (int i = 0; i < 1000; i++) 
		if ((i % 3 == 0) || (i % 5 == 0))
			suma += i;
	
	printf("%i\n",suma);

	system("pause");
	return 0;
}