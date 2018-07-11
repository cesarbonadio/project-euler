#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {

	int x = 0;
	int suma = 0;

	while (x<1000) {

		if ((x % 3 == 0) || (x % 5 == 0)) {
			suma += x;
		}
		++x;
	}

	cout << suma << endl;

	system("pause");
	return 0;

}