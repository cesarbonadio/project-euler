#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int primo(int x) {
	int i,cont=0;

	for (i = 1; i <= x; i++)
		if (x%i == 0) cont++;

	if (cont > 2) return 0;
	else return 1;
}


int main() {

	long int i = 0; int cont = 0;

	while (cont <= 10001) { 
		i++;
		if (primo(i)) cont++;}

	cout << i << endl;

	system("pause");
	return 0;
}