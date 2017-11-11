#include <stdlib.h>
#include <stdio.h>


int isprime(int x){
	int cont = 0;

	if (x == 1) return 0;

	if ((x==2)||(x==3)||(x==5)||(x==7)) return 1;

	if (x % 2 == 0) return 0;
	else if (x % 3 == 0) return 0;
	else if (x % 5 == 0) return 0;
	else if (x % 7 == 0) return 0;

	return 1;
}


int main() {

	long long  num = 600851475143;
	long long   max = 0;

	for (long long i = 1; i <= num; i++) {
		if (num%i == 0) {
			if (isprime(i))
			{
              max = i;
			  num /= i;
			}
		}
	}

	printf("%i\n", max);

	system("pause");
	return 0;
}