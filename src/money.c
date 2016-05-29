#include <stdlib.h>
#include "money.h"
#include <upc.h>


Money *money_create(int amount, char *currency) {
	Money *m;

	if (amount < 0) 
		return NULL;

	m = malloc(sizeof(Money));

	if (m == NULL)
		return NULL;

	m->amount = amount;
	m->currency = currency;
	return m;
}

int money_amount(Money *m) {
	return m->amount;
}

char *money_currency(Money *m) {
	printf("Thread %i of %i\n",MYTHREAD, THREADS);
	return m->currency;
}

void money_free(Money *m) {
	free(m);
	return;
}
