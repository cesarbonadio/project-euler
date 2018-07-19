#include <stdlib.h>
#include <stdio.h>


int isprime(int x){

                   /*
                       Esta funci�n para verificar si un n�mero es primo
                       es b�stante eficienciente en t�rminos de velocidad
                       porque solo realiza comparaciones con los primos
                       positivos m�s cercanos a 0.

                       Es mucho m�s eficiente que comprobar todos los divisores
                       del n�mero, en dicho caso, el programa tardar�a mucho en devolver
                       un resultado.

                      Sin embargo esta funci�n falla cuando x>100000. Pero es funcional
                      para este problema y tiende a ser m�s r�pida que la optimizada para todo x entero.
                   */

	if (x == 1) return 0;
	if ((x==2)||(x==3)||(x==5)||(x==7)) return 1;

	if (x % 2 == 0) return 0;
	else if (x % 3 == 0) return 0;
	else if (x % 5 == 0) return 0;
	else if (x % 7 == 0) return 0;

	return 1;
}


int main() {

                   /*
                      Simplemente ir recorriendo todo numero y sustituir por un numero maximo
                      cada vez que se encuentre un factor de num (divisor). 
                      
                      Tambi�n cada vez que encuentra un factor, se divide entre ese factor para
                       descartar repeticiones y optimizar tiempo de respuesta.
                   */

	long long  num = 600851475143;
	long long   max = 0;

	for (long long i = 1; i <= num; i++) {
	            if (num%i == 0) {
	                  if (isprime(i)){
                                             max = i;
		      num /= i;
		}
	            }
	}

	printf("%i\n", max);
	system("pause");
	return 0;
}