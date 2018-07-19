#include <stdio.h>
#include <stdlib.h>

int main() {

	/*
	 Se estableció una repetición para verificar que 
	 i es divisible, en caso contrario se rompe con el ciclo
	 para poder acortar el tiempo de respuesta. Aún así
	 sigue siendo poco eficiente y tadra unos 7 segundos en
	 dar respuesta. 
	*/


	int i = 1, k = 1, cont = 0;

	while (true) {
		++k;
		cont = 0;

		for (i = 1; i <= 20; i++) {
			if ((k%i) == 0) ++cont;
			else break;
		}

		if (cont == 20) {
			printf("%i\n",k);
			break;
		}
	}

	system("pause");
	return 0;
}

