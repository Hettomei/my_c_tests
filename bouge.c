/*
   ncursses.h ?

   Programme réalisé par Timothée Gauthier
   le 02/02/09
   Essaie de mouvement de caractère


   include <stdio.h>
   int main(void)
   {
   printf("%c[2J", 0x1B);
   return 0;
   }

*/

#include <stdio.h>
//#include <stdlib.h>
#define XX1 16 //5//15 //11 position vertical attention, le tout -1
#define XX2 41 //5//40 //31 position horizontal attention, le tout -1

/*
############
#..........#
#....@.....#      Les touches sont I J K L
#..........#
#..........#
############
*/

int xx[XX1][XX2]; //tableau pour dessiner le monde
int posX1, posX2; //où est le curseur ?
char plop; //sert à faire marcher void...
char touche, touchetest; //prend la valeur de la touche, i j k l ?
int i,j; // uniquement pour les boucles

void init(plop){

  posX1=1;
  posX2=1;
  plop=1;

  for(i=1;i<XX1;i++){

    for(j=1;j<XX2;j++){
      xx[i][j]=' '; //xx[i][j]='.';
    }
  }
  xx[posX1][posX2]='M';
}

void affiche_map(plop){

  printf("\n\n");

  for(i=1;i<(XX2+2);i++){
    printf("_");
  }

  printf("\n|");

  for(i=1;i<XX1;i++){

    for(j=1;j<XX2;j++){
      printf("%c",xx[i][j]);
    }
    printf("|\n|");
  }

  for(i=1;i<(XX2);i++){
    printf("~");
  }

  printf("|\n");
  printf("\n");


}

void quel_touche(plop){
  /*
     105 -> i -> haut
     107 -> k -> bas
     106 -> j -> gauche
     108 -> l -> droite
     113 -> q -> quitter
     */
  printf("Haut -> i\tBas -> k\tGauche -> j\tDroite -> l\tQuitter -> q\n");
  printf("Quel Direction ? ");

  while(plop==1){
    scanf("%c",&touche);

    if(touche!=10){
      plop=2;
    }
  }
  plop=1;
}

void analyse(plop){
  //printf("\n%d\t%c",touche,touche); pour verif

  if(touche==105){           //haut

    xx[posX1][posX2]='.';
    posX1=posX1-1;
    xx[posX1][posX2]='M';

    if(posX1==0){   // si y a un mur
      posX1=1;
      xx[0][posX2]='.';
      xx[1][posX2]='M';
    }
  }
  else if(touche==107){       //bas
    xx[posX1][posX2]='.';
    posX1=posX1+1;
    xx[posX1][posX2]='M';

    if(posX1==XX1){     //si y a un mur
      posX1=XX1-1;
      xx[XX1][posX2]='.';
      xx[XX1-1][posX2]='M';
    }
  }
  else if(touche==106){       //gauche
    xx[posX1][posX2]='.';
    posX2=posX2-1;
    xx[posX1][posX2]='M';

    if(posX2==0){     //si y a un mur
      posX2=1;
      xx[posX1][0]='.';
      xx[posX1][1]='M';
    }
  }
  else if(touche==108){       //droite
    xx[posX1][posX2]='.';
    posX2=posX2+1;
    xx[posX1][posX2]='M';
  }
  if(posX2==XX2){     //si y a un mur
    posX2=XX2-1;
    xx[posX1][XX2]='.';
    xx[posX1][XX2-1]='M';
  }

}

int main(){

  init(1);
  affiche_map(1);
  while(1){
    quel_touche(1);
    analyse(1);

    if(touche==113){
      return 0;
    }

    // printf("\n%c",touche); au cas où
    affiche_map(1);

  }
  return 0;
}
