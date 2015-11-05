#include <stdio.h>
#define XX1 15 //11 position vertical
#define XX2 40 //31 position horizontal

/*
############
#..........#
#....@.....#      Les touches sont I J K L
#..........#
#..........#
############
*/

char touche, touchetest; //prend la valeur de la touche, i j k l ?
int i,j; // uniquement pour les boucles

int main(){
  while(1){
    printf("\n\n");
    scanf("%c",&touche);
    printf("\n*********\n");
    printf("%c",touche);
  }
  return 0;

}
