#include <stdio.h>
#include <string.h>

struct Personne{

	int age;
	char nom[50];
	char adresse[150];

};  //<----------------- IL Y A UN POINT FIRGULE ICI

void croissant(struct Personne *tabu){
	int i,j;
	float x;	

	for(i=0; i<4;i++){
		for(j=i+1; j<5; j++){
			if((*(tabu+j)).age<(*(tabu+i)).age){
				x=(*(tabu+j)).age;
				(*(tabu+j)).age=(*(tabu+i)).age;
				(*(tabu+i)).age=x;
			}
		}
	}
	printf("\n\n");
	for (i=0;i<5;i++){
		printf("%s resident a : %s est age de %d\n\n",(*(tabu+i)).nom,(*(tabu+i)).adresse,(*(tabu+i)).age);
	}
		

}

int main(){
	printf("\n\n");
	
	struct Personne personnes[5];
	
	personnes[0].age = 255;
	strcpy (personnes[0].nom , "tim");
	strcpy (personnes[0].adresse , "6 rue du truc");
	
	
	personnes[1].age = 5;
	strcpy (personnes[1].nom , "tam");
	strcpy (personnes[1].adresse , "6 rue du bidule");
	
	personnes[2].age = 15;
	strcpy (personnes[2].nom , "tom");
	strcpy (personnes[2].adresse , "6 rue du chouette");
	
	personnes[3].age = 25;
	strcpy (personnes[3].nom , "tum");
	strcpy (personnes[3].adresse , "6 rue du choese");
	
	personnes[4].age = 75;
	strcpy (personnes[4].nom , "tyym");
	strcpy (personnes[4].adresse , "6 rue du trucchose");

	croissant(personnes);
	return 0;

}