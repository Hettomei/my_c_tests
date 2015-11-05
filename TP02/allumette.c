#include <stdio.h>

int NB_ALUMETTES,i,enlev,joueur;

void affichemap(){
	printf("\n\n%d allumettes en jeu :\n",NB_ALUMETTES);
	for (i=1;i<=NB_ALUMETTES;i++){
		printf(" |");
	}
}

void qui_joue(){
	
	while(enlev==4){
	
		printf("\nJoueur %d, enlevez 1, 2 ou 3 allumettes : ",joueur);
		scanf("%d",&enlev);
		if(enlev<1 || enlev>3){
			printf("1, 2 ou 3 allumettes, c'est tout de meme pas complique ?!");
			enlev=4;
		}
	}
	NB_ALUMETTES=NB_ALUMETTES-enlev;
	
	enlev=4;
	if (joueur==1){
		joueur=2;
	}
	else{
		joueur=1;
	}
}

int main()
{
	while(1){
	enlev=4;
	joueur=1;
	printf("\n\n***ALLUMETTES***\n");
	printf("\nCombien d'allumette ? ");
	scanf("%d",&NB_ALUMETTES);
	
	while(1){
		affichemap();
		qui_joue();
		if(NB_ALUMETTES<1){
		printf("\n\nVous avez pris la dernière allumette, perdu !!\n");
		printf("Joueur %d gagne !",joueur);
		break;
		}
	}
}
	printf("\n\n");
	return 0;
	
}


//le truc prendre pour qu'il reste 1 modulo 4, avec IA