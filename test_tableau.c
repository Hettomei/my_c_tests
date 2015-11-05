#include <stdio.h>

int main ()
{
  int i;
  int plop[100];
  for (i=0;i<100;i++){
    plop[i]=i*10;
    printf("\n%d",plop[i]);
  }
  return 0;
}
