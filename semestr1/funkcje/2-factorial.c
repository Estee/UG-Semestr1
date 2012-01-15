// factorial
#include <stdio.h>

int factorial(int num);

int main() {

  int i, f;
  for( i = 0 ; i < 11 ; i++ ){
  f=factorial(i);
  printf("%i! = %i\n", i, f);
  }

  return 0;
}

int factorial(int num){
  int fact=1;
for(int i=1; i<=num; i++)
    fact=fact*i;

return fact;
}
