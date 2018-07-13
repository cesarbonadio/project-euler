#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int has_square(int x) {
	return (sqrt(x)*sqrt(x) == x);
}


int main() {

	int c = 0, a = 0, b = 0;
	int c_2;

	for (a = 0; a <= 999; a++) {
		for (b = 0; b <= 999; b++) {

			c_2 = ((a*a) + (b*b));

			if (has_square(c_2)) {
				c = sqrt(c_2);
			}

			if ((a + b + c == 1000) && ((c*c) == (a*a) + (b*b))) break;
		}
		if ((a + b + c == 1000) && ((c*c) == (a*a) + (b*b)) && (a != 0)) break;
	}


	printf("%i\n", a*b*c);

	system("pause");
	return 0;
}