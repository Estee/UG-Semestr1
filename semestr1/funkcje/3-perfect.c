/*Liczba doskonała to liczba, która jest sumą podzielników od niej mniejszych. 
Na przykład 6 jest liczbą doskonałą ponieważ:

1 + 2 + 3 = 6

Napisz funkcję, która sprawdza czy podana liczba jest doskonała. 
Użyj tej funkcji do wypisania wszystkich liczb doskonałych mniejszych od 1000.*/

#include<stdio.h>

int isPerfect(int n);
void printPerfects();

int main() 
{
  int num, p;
  printf("Please enter a number: ");
 scanf("%d", &num);
 p = isPerfect(num);
 if( p == 1 )
   printf("%d is perfect.\n", num);
 else if( p == 2 )
   printf("%d is not perfect.\n", num);
 printPerfects();
 printf("\n");
 return 0;
}

int isPerfect(int n)
{
  int i = 1, sum = 0;

  while( i < n ){
    if( n%i == 0 )
      sum += i;
    i++;
  }
  if( sum == n )
    return 1;
  else
    return 2;
}

void printPerfects()
{
  int n = 1, p;
  printf("Perfect numbers are: ");
  for( n = 1 ; n <= 1000 ; n++ ){
    p = isPerfect( n );
    if( p == 1)
      printf("%d ", n);
  }
}
