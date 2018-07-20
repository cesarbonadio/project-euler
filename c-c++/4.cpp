#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int ispalindrome(int x) {
	unsigned int aux = x, digit, twirled = 0;


	/*Todo numero palindromo es divisible entre 11
	  pero no todo numero divisible entre 11 es palindromo.
	  un palíndromo cualquiera puede ser escrito como: 

	   abccba para cualquier valor de a,b y c
	  
	   abccba = 100000a + 10000b + 1000c + 100c + 10b + 1a
	   abccba = 100001a + 10010b + 1100c 
	   abccba = 11(9091a + 910b + 100c)
	 */

	if (x % 11 != 0) return 0;


	while (aux != 0) {
		digit = aux % 10;
		aux = aux / 10;
		twirled = (twirled * 10) + digit;
	}
	
	if (twirled == x) return 1;
	else return 0;
}


int main() {

	unsigned int a = 0, b = 0;
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

	printf("%lli\n", product);
	system("pause");
	return 0;
}