#include <stdio.h>

int main()
{
  char string[80];

  printf("\n\nInput a string:" );
  gets(string);
  printf("\n\nThe string input was: %s\n", string);
  return 0;
}
