#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int ispalindrome(int x) {
		int aux = x, digit, twirled = 0;
		while (aux != 0) {
			digit = aux % 10;
			aux = aux / 10;
			twirled = (twirled * 10) + digit;
		}
		if (twirled == x) return 1;
		else return 0;
}


int main() {

	int a = 0, b = 0;
	long long int product = 0;

	for (a = 100; a < 1000; a++) {
		for (b = 100; b < 1000; b++) {
			if (ispalindrome(a*b)) {
				if ((a*b) > product) {
					product = a*b;
				}	
			}
		}
	}
	
	printf("%i\n",product);

	system("pause");
	return 0;
}