// Prints out all the positive numbers in a table
#include <stdio.h>

int main() {

  double table[6];
  int positives=0;

  printf("Please enter 6 numbers: ");
  scanf("%lf%lf%lf%lf%lf%lf", &table[0], &table[1], 
	&table[2], &table[3], &table[4], &table[5]);

  for( int i=0; i<6; i++) {
    if( table[i]>=0 )
      positives+=1;
  }
  printf("The number of positive values in the table is %i\n", positives);

  return 0;
}
