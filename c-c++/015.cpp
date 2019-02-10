#include <stdio.h>
#include <stdlib.h>

unsigned long long int routes(int n){
	double result = 1;
	for (int i = 1; i<=n; i++){
		double term = (double)(n+i)/i;
		result *= term;
	}
	unsigned long long int int_result = (unsigned long long int)result;
	int decimal_part =(result-int_result)*100;
	if (decimal_part!=0) int_result++;
	return int_result;
}

int main() {
	printf("%llu\n",routes(20));
	system("pause");
	return 0;
}
