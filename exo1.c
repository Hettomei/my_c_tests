#include <stdio.h>
#include <string.h>

//ofjc!fidsbn!bD
//"!jusbq!utf(D

int main(){
	
	char code[15];
	char decode[15];
	int i;
	int taille=30;
	
	printf("\n\n");
	
	while(taille>14){
		printf("Votre chaine ne doit pas depasser 15 caracteres dont celui de fermeture compris");
		printf("\nEntrez votre chaine : \n");
		gets(code);
		taille=strlen(code);
	}

	for (i=0;i<=taille;i++){
		decode[i]=code[taille-i-1];
		decode[i]=decode[i]-1;
	
		if (decode[i]==-1){
			decode[i]=127;
		}
	}
	
	decode[taille]='\0';
	printf("\n%s\n\n",decode);
	return 0;
}