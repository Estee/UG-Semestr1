// Reads 6 numbers and prints them out as put and reversed

#include <stdio.h>

int main() {

  int table[6];
  int reversed[6];
  int i;

  printf("Please enter 6 integers: ");
  for( i=0; i<6; i++ )
  scanf("%i", &table[i]);

  for( i=0; i<6; i++ ) 
    printf("%i ", table[i]);
  printf("\n");
  
  for( i=0; i<6; i++ )
    reversed[5-i] = table[i];
  for( i=0; i<6; i++ )
    printf("%i ", reversed[i]);

  printf("\n");

  return 0;
}
