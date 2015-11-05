#include <stdio.h>
#include <string.h>

#define MAX 200

char str[MAX];
	
int nbMots(char* str){

	int i;
	int existe;
	int nb_mot = 0;


	for (i=0;i<=strlen(str);i++){
		existe=0;
		
		while(*(str+i)!=32 && *(str+i)!='\0'){
			i++;
			existe=1;
		}
		
		if (existe == 1 ){
			nb_mot++;
		}
	}
	
	return nb_mot;
}

int main(){
	
	gets(str);
	printf("\n\n");
	printf( "Il y a %d mots\n\n", nbMots(str));

	return 0;
}