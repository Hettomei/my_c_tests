#include <stdio.h>

int i;
int main()
{
  while(1){
    i=0;

    printf("\n\nEntrez une val entre 0 et 500 : ");

    scanf("%d",&i);

    if ( ((i > 100) && (i != 150)) || ((i<50) && (i != 12)))
    {
      printf("\n\n votre i est > 150 et i différent de 150\nou\n i< 50 et i différent de 12");
    }
  }
  return 0;
}
