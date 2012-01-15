// Prints a pattern od stars

#include <stdio.h>

int main() {

  int i,j;

  for(j=0; j<4; j++){
  
    for(i=0; i<8; i++)
      printf("* ");
    printf("\n");
    for(i=0; i<8; i++)
      printf(" *");
    printf("\n");
  }
  return 0;
}


