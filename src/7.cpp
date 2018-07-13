#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


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

	long int i = 0; int cont = 0;

	while (cont <= 10001) {
		i++;
		if (isprime(i)) cont++;
	}

	cout << i << endl;

	system("pause");
	return 0;
}