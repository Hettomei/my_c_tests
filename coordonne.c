#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	int j;
//	int k;
	
	char matrice[5][2]={{4,2},{6,4},{1,3},{2,4},{2,4}};
	char cible[2]={8,10};
	float distance1=0;
	float distance2=0;
	int distX=0;
	
	printf("\n\n");


	//////// AFFICHAGE SUDOKU
				printf("X\tY\n");
	for (i = 0;i<5;i++){
		for (j = 0;j <2;j++){
			printf("%d\t",matrice[i][j]);			
		}
		printf("\n");
	} 
	printf("\n\n");
	//////////////////FIN AFFICHAGE
	for (i = 0;i<5;i++){
		distance1=sqrt((matrice[i][0] - cible[0])*(matrice[i][0] - cible[0])+(matrice[i][1]-cible[1])*(matrice[i][1]-cible[1])) ;//X
		printf("\nDistance ddddddddddd %f\n",distance1);
		if (distance1>distance2){
			distance2=distance1;
			distX=i+1;
		}
	}
	
	printf("Distance max %f\nc'est la ligne %d",distance2,distX);
	printf("\n\nBye !!\n\n");

	return 0;
}