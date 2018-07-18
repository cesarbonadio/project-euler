#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define LIMIT 1000

int main() {
	    int a;
	        for (a = 1; a <= (LIMIT / 3); a++)
		if ((((int)pow(1000, 2) - (2000 * a)) % (2000 - (2 * a))) == 0) break;

	     int b = (((int)pow(1000, 2) - (2000 * a)) / (2000 - (2 * a)));
	     int c = 1000 - a - b;
	     printf("%i\n", a*b*c);
	
	system("pause");
	return 0;
}