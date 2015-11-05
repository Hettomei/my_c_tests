#include <stdio.h>

int choix;
float a, b;
char calc;

int main(){

	while(1){
			while(1){
		printf("\n\n********* Faites votre choix : *********\n\n");
		
		printf("1-Addition\n");
		printf("2-Multiplication\n");
		printf("3-Division\n");
		printf("4-Soustraction\n");
		printf("*********\n");
		printf("5-Quitter\n");
		printf("*********\n");
		
		printf("\nVotre choix : ");
		
		scanf("%d",&choix);
		
		
		if(choix>=1 && choix<=4){
			break;
		}
		else if(choix == 5){
			return 0;
		}
	}
	
	printf("\n*********\nEntrez le premier nombre : ");
	scanf("%f",&a);
	printf("\n\nEntrez le deuxième nombre : ");
	scanf("%f",&b);
	printf("\n***********\nLe résultat est: ");

	switch (choix)
		{
			case 1:
			a=a+b;
			printf("%f",a);
			break;

			case 2:
			a=a*b;
			printf("%f",a);
			break;

			case 3:
			if(b==0){
				printf("Impossible\nSi vous choisissez la division, ne divisez pas par 0\n*******");
				continue;
			}
			a=a/b;
			printf("%f",a);
			break;

			case 4:
			a=a-b;
			printf("%f",a);
			break;
			
			default:
			break;
	}

}
	return 0;
}










/*	switch (choix)
	{
		case 1:
	//	instructions1;
		break;

		case 2:
	//	instructions2;
		break;
		
		case 3:
		//	instructions1;
		break;

		case 4:
		//	instructions2;
		break;			

		case 5:
		return 0;
		break;
		
		default:
		continue;
		break;

	}		*/
