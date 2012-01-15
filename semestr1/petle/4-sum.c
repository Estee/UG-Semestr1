/* Calculates the sum of the numbers between 1 
   and a number entered by the user */

#include <stdio.h>

int main() {

  int number, sum;

  printf("Please enter a natural number: ");
  scanf("%i", &number);

  sum = 0;
  while( number < 0 ) {
    printf("The number is less than 0. Try again ;P ");
    scanf("%d", &number);
  }
  for(int i=1; i<=number; i++) {
    sum += i;
  }
  printf("%i\n", sum);

  return 0;
}
