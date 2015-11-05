#include <stdio.h>
#include <math.h>

long int nbr,i,j, racine;
char a;
int main()
{
	while(1){
		a=0;
		printf("\n\n****** Calcul de la primalite d'un nombre ******");
		printf("\n\nEntrez un nombre max : ");
		scanf("%ld",&nbr);
		if (nbr<3){
			continue;
		}
		
		printf("2\t");
	//	return 0;

		for (i=3;i<=nbr;i++){
				racine=sqrt(i)+1;
			for(j=2;j<=racine;j++){
				if(i%j==0){
				break;
			}
			if (j==racine){
				 printf("%ld\t",i);	
			}
		} //for i
	}
}
	return 0;
}

