#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {

	double r = pow(2, 1000);
	char output[303];
	snprintf(output, 303, "%f", r);
	long long int suma = 0;

	for (int i = 0; i <= sizeof(output);i++) {
		char caracter = output[i];
		int numero = (int)caracter-48;
		if (numero == -48) break;
		suma += numero; 
	}

	printf("%i\n\n", suma);
	 
	system("pause");
	return 0;
}