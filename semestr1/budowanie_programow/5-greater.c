/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
   int num1, num2 ;

   printf("Podaj pierwsza liczbe: ");
   scanf("%i", &num1);
   printf("Podaj druga liczbe: ");
   scanf("%i", &num2);
   if (num1>num2)
     printf("%i jest wieksza\n", num1);
   else
     printf("%i jest wieksza\n", num2);
   return 0;
}
