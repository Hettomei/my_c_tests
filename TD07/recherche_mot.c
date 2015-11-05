#include <stdio.h>
#include <string.h>

#define TOT 200

int rechercher(char* phrase, char* mot){

	int i;
	int k;
	int existe;
	char mot_extrait[TOT];

	/// on extrait le mot
	for (i=0;i<=strlen(phrase);i++){
	//	printf("\t%d,%c",i,*(phrase+i));
		k= 0;
		existe=0;
		
		while(*(phrase+i)!=32 && *(phrase+i)!='\0'){
		//	printf("\n ** %c *****************",*(phrase+i));
			mot_extrait[k] = *(phrase+i);
			i++;
			k++;
			existe=1;
		}
		
		if (existe == 1 ){
			mot_extrait[k] = '\0';
			if (strcmp(mot_extrait,mot)==0){
				printf("1");
				return 0;
			}
						sprintf(mot_extrait,"%c",'\0');
		}
	}

	return 1;
}


int main(){
	char phrase[TOT] = "     Bonjour je suis timothee comment vas tu ?     ";
	char mot[TOT] = "timothee";
	printf("\n\n");

//	printf(" ******** %d ********\n",strcmp(mot, phrase));
	rechercher(phrase, mot);
	return 0;
}