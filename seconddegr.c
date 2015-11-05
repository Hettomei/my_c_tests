#include <stdio.h>
#include <math.h>

float a, b, c,delta, x1, x2;

int main()
{
  /*	printf("Entrez la valeur de a : ");
      scanf("%f\n",&a);
      printf("Entrez la valeur de a : %f\n", a);

      printf("Entrez la valeur de a : %f\n", c);
      */
  a=0;
  b=0;
  c=0;
  x1=0;
  x2=0;

  printf("\n*** Programme Pour calculer la sol du second degré ***\n\n");
  printf("\nEntrez la valeur de a :");
  scanf("%f",&a);
  printf("\nEntrez la valeur de b :");
  scanf("%f",&b);
  printf("\nEntrez la valeur de c :");
  scanf("%f",&c);
  printf("\nMerci, calcul en cours\n");
  delta=b*b-(4*a*c);
  if (delta == 0)
  {
    x1 = -b/(2*a);
    printf("\nx = %f\n",x1);
  }
  else if (delta<0)
  {
    printf("\nNO WAY -> impossible\n");
  }
  else if (delta > 0)
  {
    x1= (-b-sqrt(delta))/(2*a) ;
    x2=	(-b+sqrt(delta))/(2*a);
    printf("\nx1 = %f\n",x1);
    printf("x2 = %f\n",x2);
  }

  return 0;
}
