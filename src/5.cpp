#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main() {
	int i = 1, k = 1, cont = 0;

	while (i) {
		++k;
		cont = 0;

		for (i = 1; i <= 20; i++) {
			if ((k%i) == 0) ++cont;
			else break;
		}

		if (cont == 20) { cout << k << endl; break; }
	}

	system("pause");
	return 0;
}
