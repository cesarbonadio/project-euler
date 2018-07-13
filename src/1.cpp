#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {

	int suma = 0;

	for (int i = 0; i < 1000; i++) 
		if ((i % 3 == 0) || (i % 5 == 0))
			suma += i;
	
	cout << suma << endl;

	system("pause");
	return 0;
}