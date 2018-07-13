#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define LIMIT 500


int count_factors(int n) {

	int count = 0;

	for (int i = 1; i <= n; i++) { 
		if (n%i == 0) ++count; 
	 }

	return count;
}


int main() {

	int suma, j = 0;

	while (true) {

		suma = 0;
		++j;

		suma = (j*(j + 1)) / 2;


		if (count_factors(suma) > LIMIT) break;
	}

	printf("%i\n", suma);
	printf("Tiene %i divisores \n", count_factors(suma));

	system("pause");
	return 0;
}