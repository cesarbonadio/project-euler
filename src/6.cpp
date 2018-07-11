#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main() {


	long int i = 0, sumadecuadrados = 0, cuadradodelasuma = 0, diferencia = 0, sumatoria = 0;

	for (i = 0; i <= 100; i++) { //ciclo para la sumatoria
		sumatoria += i;
	}

	cuadradodelasuma = sumatoria * sumatoria;


	for (i = 0; i <= 100; i++) { //ciclo para la suma de los cuadrados
		sumadecuadrados += (i*i);
	}

	diferencia = cuadradodelasuma - sumadecuadrados;

	cout << diferencia << endl;

	system("pause");
	return 0;
}