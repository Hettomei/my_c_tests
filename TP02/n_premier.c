#include <stdio.h>
#include <math.h>

long int nbr,i;
char a;
int main()
	{
		while(1){
			a=0;
		printf("\n\n****** Calcul de la primalite d'un nombre ******");
		printf("\n\nEntrez un nombre : ");
		scanf("%ld",&nbr);
		
		if (nbr==2){
			printf("2 est premier");
			continue;
		}
		else if (nbr==1){
			printf("1 n'est pas premier");
			continue;
		}
		
		for (i=2;i<=sqrt(nbr);i++){
			if(nbr%i==0){
				printf("%ld n'est pas premier",nbr);
				a=1;
				break;
			}
			}	
			if(a==0){
				printf("%ld est premier",nbr);
		
		}
		
		
		}
		return 0;
	}
	