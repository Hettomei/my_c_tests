//prog pour permuter 2 variable, by 3MWE le 27/01/09

#include <stdio.h>

int a, b, c;

int main()
{
  printf("\nEntrez la valeur de a :");
  scanf("%d",&a);
  printf("\nEntrez la valeur de b :");
  scanf("%d",&b);
  printf("\nDonc a vaut %d et b vaut %d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("Donc a vaut %d et b vaut %d\n\n",a , b);
  return 0;
}
