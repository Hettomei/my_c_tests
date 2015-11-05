#include <stdio.h>
#include <math.h>
#define TAILLE 10

/////////Le but est de trouver le min du tableau

void minDist(int *tab, int *ref){
	int plop;
	int i;

	plop = abs (*(tab+1)) ;

   printf("%d",plop);

	for(i=0;i<TAILLE;i++){
		printf("%d",*(tab+i));
	} 

}

int main(){

	int tab[TAILLE]={7,-4,7,90,56,34,-12,45,67,21};
	int ref;

	printf("\n\n");
	scanf("%d",&ref);
	minDist(tab, &ref);
	printf("\n\n");

	return 0;
}