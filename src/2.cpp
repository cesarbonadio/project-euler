#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main() {

	int suma = 0, x = 1, y = 2;

	while ((y) <= 4000000) {


		if (x % 2 == 0) suma += x;
		if (y % 2 == 0) suma += y;

		x += y;
		y += x;
	}


	cout << suma << endl;

   
	system("pause");
	return 0;

}