// checks whether a number is prime or composite
#include <stdio.h>
#include <math.h>

int isPrime( unsigned int x );

int main() 
{
  unsigned int n;
  int is_prime;
 
  printf("Please enter a number: ");
  scanf("%d", &n);
  if( isPrime( n ) == 2 ) {
    printf("1 is neither prime nor composite.\n");
    return 0;
  }
  else if( isPrime( n ) == 1 )
    is_prime = 1;
  else 
    is_prime = 0;

  printf("The number '%d' is %s\n",
    n, is_prime ? "prime" : "composite");
  return 0;
}

int isPrime( unsigned int x )
{
  int i = 2;
  unsigned int n = (unsigned int)sqrt((double)x );
  if( x==1 )
    return 2;
  else {
  for( i = 2 ; i <= n ; i += 1) {
    if(( x % i ) == 0) {
      return 0;
    }
  }
  }
  return 1;
}
