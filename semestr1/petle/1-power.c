// Powers of the number 2

#include <stdio.h>
int main() {

  int two = 2;
  int power = 1;

  for (int i=2; i<11; i++){
    power = two*2;
    two = power;
 
  printf("2^%i = %i\n", i, power);
}
    return 0;
}

