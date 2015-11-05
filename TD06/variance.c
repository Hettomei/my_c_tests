#include <stdio.h>

#define TAILLE 10

/////////Le but est de trouver le min du tableau

void variance(float *tab){
	
	int i;
	float moyenne;
	float variancee;
	moyenne=0;
	
	////////////MOYENNE
	for(i=0;i<=TAILLE;i++){
	moyenne = moyenne + (*(tab+i)) ;
	}
	moyenne = moyenne/TAILLE; 
	//////////////////
		printf("******** %f ********",moyenne);
	///////////////Variance
	int deb_var;
	variancee = 0;
	
	for(i=0;i<=TAILLE;i++){
	deb_var = (*(tab+i))-moyenne;
	variancee = variancee + ((deb_var - moyenne) * (deb_var - moyenne));
	}
	variancee=variancee/TAILLE;
	
	printf("%f",variancee);
}

int main(){

	float tab[TAILLE]={(7.4), (4.3), (7.7), (20), (15.1), (12.6), (12.8), (5.3), (17.4), (1.9)};

	printf("\n\n");
	variance(tab);
	printf("\n\n");

	return 0;
}