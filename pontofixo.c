#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double f(double x) {
	return (cos(x)-x);
}

double SolucaoPontoFixo(double *xz, double pr) {
	double x, dx;
	int cont=0;

	do {
		x=f(x);
		dx=fabs(x-*xz);
		*xz=x;
		printf("%g\n", *xz);
		cont++;
	}while(dx>pr);
	
	return cont;
}

int main(int arg, char **argv) {
	double x0, prec;
	
	x0 = atof(argv[1]);
	prec = atof(argv[2]);
	printf("\nRaiz = %.10g em %g iterações\n", x0, SolucaoPontoFixo(&x0, prec));
	return 0;
}
