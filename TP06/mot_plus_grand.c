#include <stdio.h>
#include <string.h>

#define MAX 200

char str1[MAX];
char str2[MAX];
	
void plusgrand(char* str1, char* str2){

	int i;
	int existe;
	int j=0;
	char grand[MAX] = "";

	for (i=0;i<=strlen(str1);i++){
		existe=0;
		
		while(*(str1+i)!=32 && *(str1+i)!='\0'){
			*(str2+j) = *(str1+i) ;
			i++;
			j++;
			existe=1;
		}
		
		if (existe == 1 ){
			*(str2+j) = '\0';
			j=0;
			if (strlen(str2)>strlen(grand)){
				strcpy (grand, str2);
			}
		}
	}
		strcpy (str2, grand);
}

int main(){
	
	gets(str1);
	printf("\n\n");
	plusgrand(str1, str2);
	printf( "Le plus grand est :\n%s\n\n", str2);

	return 0;
}