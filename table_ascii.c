#include <stdio.h>
unsigned char i;

int main(){
  int temp[5] = {0,1,0,1,0};
  int i;
  printf("\n\n");

  for(i=0;i<=128;i++){
    printf("%d -> \"%c\"\n", i, i);
  }
  return 0;
}
