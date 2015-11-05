#include <stdio.h>
#include <string.h>

struct Pays{
	
	char capitale[50];
	char langue[50];
	unsigned long population;


};    


int main(){
	
	struct Pays france, espagne, italie; //déclaration d'une variable.

	strcpy (france.capitale,"Paris");
	strcpy (france.langue,"Francais");
	france.population=66000000;
	
	strcpy (espagne.capitale,"Madrid");
	strcpy (espagne.langue,"Espagnole");
	espagne.population=45000000;
	
	strcpy (italie.capitale,"Rome");
	strcpy (italie.langue,"Italien");
	italie.population=60000000;
	
	printf("\n\nLa capitale de la france est %s il y a %ld habitants\n\n", france.capitale, france.population);
	
	return 0;

}