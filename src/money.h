#ifndef _MONEY_H_
#define _MONEY_H_

typedef struct Money {

	int amount;
	char *currency;
} Money;

Money *money_create(int amount, char *currency);
int money_amount(Money * m);
char *money_currency(Money * m);
void money_free(Money * m);



#endif /* _MONEY_H_ */