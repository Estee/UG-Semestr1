// n choose k
#include <stdio.h>

int newton(int n, int k);

int main()
{
  int a, b;
  printf("Please enter n: ");
  scanf("%d", &a);
  printf("Please enter k: ");
  scanf("%d", &b);
  printf("\n");
  while( a < 0 || b < 0 || b > a){
    printf("\nBoth numbers must be greater or equal to 0\nand k must be smaller or equal to n!\n\nPlease, enter your numbers correctly!\n\n");
    printf("n = ");
    scanf("%d", &a);
    printf("k = ");
    scanf("%d", &b);
    printf("\n");
  }
  int x = newton( a, b );
  printf("%d choose %d is %d\n\n", a, b, x);
  return 0;
}

int newton(int n, int k)
{
  int x;
  if( k == 0 || k == n )
    x = 1;
  else {
    x = newton( n-1,k-1 )+newton( n-1,k );
  }
  return x;
}
