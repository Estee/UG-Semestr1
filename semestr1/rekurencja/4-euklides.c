// NWD (GCD)
#include <stdio.h>

int countIt(int a, int b);

int main()
{
  int x, y;
  printf("Please enter 2 numbers whose greatest common devisor you wish to know: ");
  scanf("%d%d", &x, &y);
  printf("GCD of %d and %d is %d\n", x, y, countIt(x, y) );
  return 0;
}

int countIt(int a, int b)
{
  if( b==0 )
    return a;
  return countIt(b, (a%b) );
}
 
