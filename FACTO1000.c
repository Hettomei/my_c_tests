#include <stdio.h>
#include <string.h>

double fact(int nombre){

	int i;
	double produit=1.0;

	for (i=1;i<=nombre;i++){
		produit=produit * i;
	}

	return produit;
}

int main(){

	printf("\n1000 -> %lf\n\n",fact(1000));
		printf("\n100 -> %lf\n\n",fact(100));
			printf("\n10 -> %lf\n\n",fact(10));
				printf("\n5 -> %lf\n\n",fact(5));
	return 0;
}