#include <stdio.h>
//afficher un triangle d'etoile de base n

int nbr,i,j, base,nbr2;

int main()
{
	while(1){
		printf("\n\n****** affiche d'un triangle avec base ******");
		printf("\n\nEntrez un nombre pour la base, il sera multiplié par 2 plus 1 ajouté : ");
		scanf("%d",&nbr);
		printf("\n\n");
		if (nbr<1){
			continue;
		}
		base=(nbr*2)+1;
		nbr2=nbr;
		
		for(j=1;j<=nbr;j++){  //affichage haut

			
			for(i=1;i<=nbr2;i++){
				printf(" ");
			}
			nbr2--;
			for(i=1;i<=j*2-1;i++){
				printf("*");
			}
			printf("\n");

		}
		
		//affichage raccord
		for (i=1;i<=base;i++){
			printf("*");
		}
		printf("\n");
		
		//affichage bas
		nbr2=1;
		for(j=1;j<=nbr;j++){

			for(i=1;i<=nbr2;i++){
				printf(" ");
			}
			nbr2++;
			for(i=1;i<=base-(j*2);i++){
				printf("*");
			}
			printf("\n");

		}
		
		
	}
	return 0;
}