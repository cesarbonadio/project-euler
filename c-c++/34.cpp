#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int factorial(int n) {

	if (n == 0) return 1;
	int f = 1;

	for (int i = n; i > 0; i--)
		f = f * (i);

    return f;
}

int is_curious(int n){

	if ((n == 1) || (n == 2) || (n == 0)) return 0;

	int aux = n,d,sum=0;

	while (aux != 0) {
		d = aux % 10;
		sum += factorial(d);
		aux /= 10;
	 }

	if (n == sum) return 1;
	return 0;
}


int main() {

	/*
    muy parecido al problema 30
    solo que este es con factoriales.
	*/

	int sum = 0;

	for (int i = 0; i < 50000; i++)
		if (is_curious(i))
			sum += i;
	

	printf("%i\n", sum);
	system("pause");
	return 0;
}