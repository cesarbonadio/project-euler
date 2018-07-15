#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int is_valid(int n){

	if ((n == 1) || (n == 2) || (n == 0)) return 0;

	int aux = n,d,sum=0;

	while (aux != 0) {
		d = aux % 10;
		sum += pow(d,5);
		aux /= 10;
	 }

	if (n == sum) return 1;
	return 0;
}


int main() {

	int sum = 0;

	for (int i = 0; i < 500000; i++)
		if (is_valid(i))
			sum += i;
	

	printf("%i\n", sum);
	system("pause");
	return 0;
}