#include <stdio.h>
#include <string.h>

#define MAX 200

char str1[MAX] ;
char str2[MAX] ;
	
void sansEspace(char* str1, char* str2){

	int i;
	int j = 0;
	int mot=0;
//	int que_esp;

	for (i=0;i<=strlen(str1);i++){		
		if ( mot == 1 && *(str1+i+1) != '\0'){
			*(str2+j) = 32 ;
			j++;
			mot = 0;
		}
				
		while(*(str1+i)!=32 && *(str1+i)!='\0'){
			*(str2+j) = *(str1+i) ;
			i++;
			j++;
			mot=1;
		}

	}
		if ( *(str2+ strlen(str2)-1) == 32){
			*(str2+strlen(str2)-1)= '\0';
		}
			
}

int main(){
	
	gets(str1);
	printf("\n\n");
	sansEspace(str1, str2);
	printf( "%s\n\n",str2);
	return 0;
}