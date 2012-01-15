// Calculates n to the power of k
#include <stdio.h>

int power(int x, int y);

int main()
{
  int n, k;
  printf("Please enter a number u want to count the power of: ");
  scanf("%d", &n);
  printf("Please enter the power: ");
  scanf("%d", &k);
  printf("%d ^ %d = %d\n", n, k, power( n, k ) );
  return 0;
}

int power(int x, int y)
{
  int z;
  if( y == 0 )
    return 1;
  else
    z = x*power(x, y-1);
      return z;
}
