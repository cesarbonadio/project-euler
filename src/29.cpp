#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define LIMIT_2 100
#define LIMIT_1 2



struct list {
	double n;
	struct list *next;
};

struct list *create_node(double x) {
	struct list *p = (struct list *)malloc(sizeof(struct list));
	p->n = x;
	p->next = NULL;
	return p;
}


void store_n(struct list **p, double n) {


	/*Inserta todo en una lista enlazada sin repeticiones
	  de esta manera se asegura de que no haya exponentes
	  repetidos para luego contarlos */

	struct list *aux;
	aux = (*p);
	if (!(*p)) (*p) = create_node(n);

	else {
		while ((aux)&&(aux->n!=n)) aux = aux->next;

		if (!aux) {
			aux = create_node(n);
			aux->next = (*p);
			(*p) = aux;
		}
	}
}



int count_num(struct list *p) {
	int count = 0;

	while (p) {
		++count;
		p = p->next;
	}

	return count;
}


int main() {

	struct list *numbers = NULL;

	for (int a = LIMIT_1 ; a <= LIMIT_2; a++) {
		for (int b = LIMIT_1 ; b <= LIMIT_2 ; b++){
			store_n(&numbers, (double)pow(a,b));
		}
	}

	printf("%i\n\n", count_num(numbers));
	printf("\n");
	system("pause");
	return 0;
}