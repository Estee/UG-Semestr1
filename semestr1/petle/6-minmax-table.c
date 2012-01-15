// Prints out the greatest and the smallest number in a table
#include <stdio.h>

int main() {

  double table[6];
  double min, max;

  printf("Please enter 6 numbers: ");
  for( int i = 0 ; i < 6 ; i++ )
    scanf("%lf", &table[i]);

  min=table[0];
  max=table[0];
  for( int i=0; i<6; i++) {
    if( table[i]<min )
      min=table[i];
    else if( table[i]>max )
      max=table[i];
  }
  printf("The greatest number is %.2lf\n", max);
  printf("The smallest number is %.2lf\n", min);

  return 0;
}
