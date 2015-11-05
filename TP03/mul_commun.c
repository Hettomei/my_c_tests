#include <stdio.h>
/* connaitre le plus petit facteur commun de deux nombre
	11 et 7 le plus petit commun facteur est 77
	32 et 16 c'est 32.
	
	a ------ b
	c
	c%a=0
	ET
	c%b=0
*/

int a,b,i,j,restea,resteb;

int main()
{
	while(1){
		printf("\n\n****** affiche le PPCF (plus petit commun facteur) ******");
		printf("\n\nEntrez un nombre a : ");
		scanf("%d",&a);
		printf("Entrez un nombre b : ");
		scanf("%d",&b);
		if (a<1 || b<1){
			continue;
		}
		
		printf("\n\nCalcul du PPCF\n\n");
		for (i=1;i<=a*b;i++){
			restea=i%a;
			resteb=i%b;
			if (restea==0 && resteb==0){
				printf("\n le PPCF est %d",i);
				printf("\n%d mod %d = %d",i,a,i%a);
				printf("\n%d mod %d = %d",i,b,i%b);
				break;
			}
		}
		
	}
	return 0;
}