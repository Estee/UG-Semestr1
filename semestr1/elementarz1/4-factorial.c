// Factorial of a given number

#include <stdio.h>

int main() {

  int secondNumber = 1;  
  int factorial, number;

  printf("Please enter a number: ");
  scanf("%i", &number);

  for(int i=1; i<=number; i++) {
    factorial = i*secondNumber;
    secondNumber = factorial;
  }
  printf("%i! = %i\n", number, factorial);

  return 0;
}
