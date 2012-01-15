// Prints out the roots of the first 20 natural numbers.
#include <stdio.h>
#include <math.h>

void printNumbers();

int main() {

  printNumbers();

  return 0;
}

void printNumbers(){
  for( int i=0; i<=20; i++ )
    printf("%d\t\t%lf\n", i, sqrt(i) );
}
