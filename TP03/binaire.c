#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//convertir un décimal en binaire;

int main(){

	unsigned int nbr_int;
	char nbr_en_car[15];
	int nbr_de_car;
	int i;

	while(1){

		printf("\n\nEntrez un nombre décimale > a 0 : ");
		scanf("%d",&nbr_int);
		sprintf(nbr_en_car, "%x",nbr_int);

		printf("%u donne ",nbr_int);

		nbr_de_car=strlen(nbr_en_car)-1;

		for (i=0;i<=nbr_de_car;i++){

			switch (nbr_en_car[i])
			{
				case '0':
				printf("0000");
				break;
				case '1':
				printf("0001");
				break;
				case '2':
				printf("0010");
				break;
				case '3':
				printf("0011");
				break;
				case '4':
				printf("0100");
				break;
				case '5':
				printf("0101");
				break;
				case '6':
				printf("0110");
				break;
				case '7':
				printf("0111");
				break;
				case '8':
				printf("1000");
				break;
				case '9':
				printf("1001");
				break;
				case 'a':
				printf("1010");
				break;
				case 'b':
				printf("1011");
				break;
				case 'c':
				printf("1100");
				break;
				case 'd':
				printf("1101");
				break;
				case 'e':
				printf("1110");
				break;
				case 'f':
				printf("1111");
				break;

				default:
				printf("\neuh, soucis là !!\n");
				break;
			}

		}
		printf(" en binaire\n");
	}
	return 0;
}