#include <stdio.h>
#include <string.h>
unsigned char i;

int main(){

  int i;
  printf("\n\n");

  for(i=0;i<=128;i++){
    printf("%d -> \"%c\"\n", i, i);
  }
  return 0;
}
