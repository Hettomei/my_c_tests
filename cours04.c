#include <stdio.h>

int a=13;
int i=0;
char b='P';
float f=32423.45;
int main()
{
  printf ("La variable a est : %d\n",a);
  printf ("La variable b est en caractere: %c\n",b);
  printf ("La variable b est en chiffre: %d\n",b);
  printf ("La variable f est : %f\n",f);

  for (i=0;i<127;i++)
  {
    printf ("%d -> %c \n",i,i);
  }
  char po=9;
  printf ("%c",po);
  return 0;
}
