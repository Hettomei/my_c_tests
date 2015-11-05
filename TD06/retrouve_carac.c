#include <stdio.h>

int main(){
	char chaine[500];
	int i;
	int trouve;

	while(1){
		printf("\n\nEntrez votre chaine de caractere : ");
		scanf("%s", chaine);
		i=0;
		trouve=0;
		while(chaine[i] != '\0'){

			if(chaine[i]=='t'){
				if (chaine[i+1] == '\0'){
					break;
				}
				else if (chaine[i+1] == 'o'){
					if (chaine[i+2] == '\0'){
						break;
					}
					else if (chaine[i+2] == 't'){
						if (chaine[i+3] == '\0'){
							break;
						}					
						else if (chaine[i+3] == 'o'){
							trouve=1;
							printf("\n1");
							i=i+4;
							continue;
						}
					}
				}
			}
			i++;
		}
		if (trouve==0){
			printf("\n0");
		}
	}
	return 0;
}