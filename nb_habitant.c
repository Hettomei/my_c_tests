#include <stdio.h>

#define TAILLE 5

int main()
{
	int i;
	int j;
	float max[5];
	float	nb_pop[TAILLE][TAILLE]={{1,2,3,4,5},{6,7,8,9,10},{111,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
//	printf("\n\n%.2f\n\n",nb_pop[0][0]);	
	printf("\n\n");	
	
	max[0]=0;
		max[1]=0;
			max[2]=0;
	
	for (i = 0;i<TAILLE;i++){
	
		for (j = 0;j <TAILLE;j++){
			printf("%.2f ** ",nb_pop[i][j]);
			if (max[0] < nb_pop[i][j]){
				max[0] = nb_pop[i][j];
				max[1] = i;
				max[2] = j;
			}
		}
			printf("\n");
	} 
	printf("\n\n");
	printf("La densite est %.2f\na la colonne numero : %.0f\net a la ligne numero : %.0f\n\n",max[0]*40000,max[1]+1,max[2]+1);
	
//	printf("\n\n%.2f\n\n",nb_pop[4][1]);  //<- 4 = colonne ; 1 = ligne !!
	return 0;
}
