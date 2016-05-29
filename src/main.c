//main.c
#include <check.h>
#include <stdio.h>
#include <upc.h>
#include "money.h"

/*START_TEST ("Test_1") {
	
}
END_TEST*/

Money *m;


double max(double a, double b) {
	if (a>b)
		return a;
	else return b;
}

int main(){
	m = money_create(10, "EUR");
	printf("%f\n",max(2,3.6));
	printf("Thread %i of %i\n",MYTHREAD, THREADS);

	money_free(m);
	return 0;
}

