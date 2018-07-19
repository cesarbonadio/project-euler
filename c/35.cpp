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



int count_d(int n) {

	int count = 0;

	while (n != 0) { ++count;  n /= 10; }

	return count;
}


int orbit(int n) {

	int n_10 = n / 10;
	int orbit = n % 10;
	n = n_10;

    while (n != 0) { orbit *= 10; n /= 10; }

	orbit += n_10;
	return orbit;
}


int is_circular_prime(int n) {

	int aux = n;

	for (int i = 1; i <= count_d(n); i++) {
		if (!(isprime(n))) return 0;
		n = orbit(n);
	}
	return 1;

}





int main() {

	int count = 0;
	for (int i = 1; i<= 1000000; i++) if (is_circular_prime(i)) ++count;
	printf("%i\n", count);
	
	system("pause");
	return 0;
}