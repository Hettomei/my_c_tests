#include <stdio.h>
#include <string.h>

#define TOT 200

void plusCourt(char* str){

	int taille = strlen(str);  //taille de la phrase
	char le_mot_en_cours[TOT];
	char le_mot_extrait[TOT];
	int i;
	int long_mot = taille; // longueur du mot le plus court
	int long_mot_en_cours = taille + 1; //longueur du mot en cours
	int deb_mot = 0 ;              // le mot à t'il démarré ??

	for (i=0; i<=taille;i++){

		if ((*(str+i) != '\0' && *(str+i) != 32) ){
			
			if (deb_mot == 0){
				long_mot_en_cours = 0;
				deb_mot = 1;
				
			}
			le_mot_en_cours[long_mot_en_cours]= *(str+i);
			long_mot_en_cours++;
			le_mot_en_cours[long_mot_en_cours]= '\0';
			continue;
		}

		if (long_mot_en_cours < long_mot){
			sprintf(le_mot_extrait , "%s" ,le_mot_en_cours );
			sprintf(le_mot_en_cours , "%c",'\0' );
			long_mot = long_mot_en_cours;
			deb_mot = 0;
		}
					deb_mot = 0;
		//	printf("\n*** %s",le_mot_en_cours);
	//		printf("\n*** %s",le_mot_extrait);

	}
	
	printf ("\n\n***************** Le mot le plus court est : %s *************\n\n",le_mot_extrait);
}
int main(){
	char str[TOT] = "      JE ne suis pas abso lument d'accord avec TON TRAVAIL     ";
	printf("\n\n");
	printf ("%s\n",str);
	plusCourt(str);
	return 0;
}