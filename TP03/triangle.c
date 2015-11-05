#include <stdio.h>
//afficher un triangle d'etoile de base n

int nbr,i,j;

int main()
{
	while(1){
		printf("\n\n****** affiche d'un triangle avec base ******");
		printf("\n\nEntrez un nombre pour la base : ");
		scanf("%d",&nbr);
		printf("\n\n");
		if (nbr<1){
			continue;
		}

		for (i=1;i<=nbr;i++){
			for (j=1;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}