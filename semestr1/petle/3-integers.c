// Prints out all the integers in between a and b.

#include <stdio.h>

int main() {

  int a, b, z;

  printf("Please enter 2 integers: ");
  scanf("%i%i", &a, &b);

  if ( a>b ) {
    z = a;
    a = b;
    b = z;
  }
  
  for(int i=a; i<b-1; i++){
    a+=1;
    printf("%i ", a);
  }
   printf("\n");
  return 0;
}
