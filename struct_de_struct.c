#include <stdio.h>
#include <string.h>

struct Ville{
	char nom[50];
	unsigned long nombre_hab;
};

struct Pays{
	
	struct ville capitale;
	
	char capitale[50];
	unsigned long population;

};

int main(){
	
	struct Pays france; //déclaration d'une variable.

	strcpy (france.capitale.nom,"Paris");
	france.capitale.nombre_hab=66000000;
	strcpy (france.langue,"Espagnole");
	france.population = 66000000;
	printf("\n\nLa capitale de la france est %s il y a %ld habitants\n\n", france.capitale, france.population);
	
	return 0;

}