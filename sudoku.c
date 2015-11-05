#include <stdio.h>

#define TAILLE 4

int main()
{
	int i;
	int j;
	int k;

	int control=0;

	char un = 0;
	char deux = 0;
	char trois = 0;
	char quatre = 0;

//	char	sudok[TAILLE][TAILLE]={{1,2,3,4},{1,4,1,2},{1,3,4,2},{2,4,1,3}};
//	char	sudok[TAILLE][TAILLE]={{1,2,3,4},{3,4,2,1},{2,3,4,1},{4,1,2,3}};
	char	sudok[TAILLE][TAILLE]={{1,2,3,4},{2,1,4,3},{9,10,11,12},{13,14,15,16}};

	printf("\n\n");


	//////// AFFICHAGE SUDOKU
	for (i = 0;i<TAILLE;i++){

		if (i == 2 && control == 0){
			printf("----------------+-----------------\n");
			control++;
		}

		for (j = 0;j <TAILLE;j++){
			printf("%d\t",sudok[i][j]);

			if (j == 1){
				printf("|\t");
			}
		}
		printf("\n");
	} 
	printf("\n\n");
	//////////////////FIN AFFICHAGE
	control=0;

	//////////debut ligne
	for (i = 0;i<TAILLE;i++){
		for (j = 0;j <TAILLE;j++){

			for ( k = 1; k <= 4; k++){

				if (sudok[i][j]==k){

					switch (k)
					{
						case 1:
						un++;
						break;

						case 2:
						deux++;
						break;

						case 3:
						trois++;
						break;

						case 4:
						quatre++;
						break;

						default:
						printf ("Big Probleme !!!!");
						return 0;
					}
					break;
				}
			}

		}
		if (un>1 || deux>1 || trois>1 || quatre>1){
			printf("Marche pas ligne %d\n",i);
		}
		un = 0;
		deux = 0;
		trois = 0;
		quatre = 0;
	}

	////////deb colonne
	for (i = 0;i<TAILLE;i++){
		for (j = 0;j <TAILLE;j++){

			for ( k = 1; k <= 4; k++){

				if (sudok[j][i]==k){

					switch (k)
					{
						case 1:
						un++;
						break;

						case 2:
						deux++;
						break;

						case 3:
						trois++;
						break;

						case 4:
						quatre++;
						break;

						default:
						printf ("Big Probleme !!!!");
						return 0;
					}
					break;
				}
			}

		}
		if (un>1 || deux>1 || trois>1 || quatre>1){
			printf("Marche pas colonne %d\n",i);
		}
		un = 0;
		deux = 0;
		trois = 0;
		quatre = 0;
	}
	////// fin collone

	///deb case

	//CASE 1
	for ( k = 1; k <= 4; k++){
		if (sudok[0][0]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[0][1]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[1][0]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[1][1]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
	}
		if (un>1 || deux>1 || trois>1 || quatre>1){
			printf("Marche pas case 1\n");
		}
		un = 0;
		deux = 0;
		trois = 0;
		quatre = 0;
	//CASE 2
	for ( k = 1; k <= 4; k++){
		if (sudok[0][2]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[0][3]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[1][2]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[1][3]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
	}
		if (un>1 || deux>1 || trois>1 || quatre>1){
			printf("Marche pas case 2\n");
		}
		un = 0;
		deux = 0;
		trois = 0;
		quatre = 0;
	//CASE 3
	for ( k = 1; k <= 4; k++){
		if (sudok[2][0]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[2][1]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[3][0]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[3][1]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
	}
		if (un>1 || deux>1 || trois>1 || quatre>1){
			printf("Marche pas case 3\n");
		}
		un = 0;
		deux = 0;
		trois = 0;
		quatre = 0;
	//CASE 4
	for ( k = 1; k <= 4; k++){
		if (sudok[2][2]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[2][3]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[3][2]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
		if(sudok[3][3]==k){
			switch (k)
			{
				case 1:
				un++;
				break;

				case 2:
				deux++;
				break;

				case 3:
				trois++;
				break;

				case 4:
				quatre++;
				break;

				default:
				printf ("Big Probleme !!!!");
				return 0;
			}
		}
	}
	if (un>1 || deux>1 || trois>1 || quatre>1){
		printf("Marche pas case 4\n");
	}

	printf("\n\nBye !!\n\n");

	return 0;
}