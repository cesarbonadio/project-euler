#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int isprime(int x) {
	if (x <= 1) return 0;

	else if (x <= 3) return 1;

	else if ((x % 2 == 0) || (x % 3 == 0)) return 0;

	int i = 5;
	while (i * i <= x) {
		if ((x % i == 0) || (x % (i + 2) == 0)) return 0;
		i = i + 6;
	}

	return 1;
}





int main() {

    long long int suma = 0;

	for (int i = 1; i <= 2000000; i++) {
		if (isprime(i)) {
			suma += (int)i;
		}
	}

	printf("%lli", suma);
	system("pause");
	return 0;
}