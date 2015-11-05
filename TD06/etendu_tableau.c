#include <stdio.h>

#define TAILLE 10

/////////Le but est de trouver le min du tableau

void etendu(float *tab){

	int i;
	float min, max;

	printf("\n\nListe des nombres");

	for(i=0;i<=TAILLE-1;i++){
		printf("\n%f",*(tab+i));
	}
	printf("\n\n");

		//min

	min=*(tab);
	max=*(tab);

	for(i=0;i<=TAILLE-1;i++){

		if((*(tab+i))<min){
			min=(*(tab+i));
		}

		if((*(tab+i))>max){
			max=(*(tab+i));
		}

	}

	printf("\n\n*****min %f ******* max %f\n\n",min,max);

	printf("etendu : %f",max-min);
		//max
}

int main(){

	float tab[TAILLE]={(7.4), (4.3), (-7.7), (20), (15.1), (12.6), (12.8), (5.3), (-17.4), (1.9)};

	printf("\n\n");
	etendu(tab);
	printf("\n\n");

	return 0;
}