#include <stdio.h>
#include <string.h>

#define MAX 200

char str1[MAX] ;
char str2[MAX] ;
int indexx ;

void extract(char* str1, char* str2, int* indexx){

	int i;
	int j=0;

	for (i=*indexx;i<=strlen(str1);i++){		
			*(str2+j) = *(str1+i) ;
			j++;
		}
}

int main(){
	
	printf("\n\nEntrez une chaine de caractere :\n");
	gets(str1);
	int taille = strlen(str1);
	indexx = taille + 5 ;
	
	while(indexx > taille ){
	printf("\nEntrez un index (compris entre 0 et %d): ", taille);
	scanf("%d",&indexx);
}
	printf("\n\n");
	extract(str1, str2, &indexx);
	printf( "A l indice %d il y a ecrit :\n%s\n\n",indexx , str2);
	return 0;
}