#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

                   /*
                    Encontrar el cuadrado de la suma y la suma de cuadrados de todos los 
                    enteros menos que 100 y luego restar.
                   */
                  
	long int i = 0, sc = 0, cs = 0, sum= 0;

	for (i = 0; i <= 100; i++)  sum += i;
	cs= pow(sum,2);

	for (i = 0; i <= 100; i++) sc += pow(i,2);

	printf("%i\n", cs - sc);
	system("pause");
	return 0;
}