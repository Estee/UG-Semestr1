// Makes simple calculations.

#include <stdio.h>
#include <math.h>

int main() {
  float n1, n2, n3;

  n1=5+3*8/2-3;
  n2=2%2+2*2-2/2;
  n3=2*4*(5+9/2);

  printf("n1 = %.2f, n2 = %.2f, n3 = %.2f\n", n1, n2, n3);

  return 0;
} 
