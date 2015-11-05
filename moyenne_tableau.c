#include <stdio.h>

int main ()
{
  int i;
  float note[8], coef[8]; //note[15] -> notes total avec coef; note[16] -> division par somme des coefs

  printf("\n\nEntrez les 7 notes de l'élève Ainsi que les valeurs des coefficients\n\n");

  for (i=1;i<8;i++){

    printf("Note numéro %d : ",i);
    scanf("%f", &note[i]);

    printf("Coéfficient numero %d : ",i);
    scanf("%f", &coef[i]);

    note[0]=note[0]+(note[i]*coef[i]);
    coef[0]=coef[0]+coef[i];

  }

  printf("\nLa moyenne est de : %f\n\n",note[0]/coef[0]);
  return 0;
}


//multiplier chaque note par son coef, puis diviser par la somme des coeff
