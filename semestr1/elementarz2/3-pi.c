/*Oblicza wartość π (pi) z nieskończonej sumy

π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
Wypisz w postaci tabelki przybliżoną 
wartość π przez sumę 10, 100, 1000 i 1_000_000 wyrazów tego szeregu.*/

#include <stdio.h>
#include <math.h>

long double countPi( int
 num );

int main() {
  int n;

  printf("How many times? ");
  scanf("%i", &n);

  printf("\nNumber of operations\tPI\n");
  printf("-------------------------------------\n");

  printf("%i\t\t\t%Lf\n", n, countPi(n));
  printf("10\t\t\t%Lf\n", countPi(10));
  printf("100\t\t\t%Lf\n", countPi(100));
  printf("1 000\t\t\t%Lf\n", countPi(1000));
  printf("1 000 000\t\t%Lf\n\n", countPi(1000000));

  return 0;
}

long double countPi( int n ) {
  double pi = 4;
  double num = -4.0;
  double denomonator = 3.0;
  int i;
  for( i = 1 ; i < n ; i += 1 ) {
    pi += num / denomonator;
    num *= -1.0;
    denomonator += 2.0;
  }
  return pi;
}
