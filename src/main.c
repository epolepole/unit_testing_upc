//main.c
#include <check.h>
#include <stdio.h>
#include <upc.h>

/*START_TEST ("Test_1") {
	
}
END_TEST*/

double max(double a, double b) {
	if (a>b)
		return a;
	else return b;
}

int main(){

	printf("%f\n",max(2,3.6));
	printf("Thread %i of %i",MYTHREAD, THREADS);

	return 0;
}