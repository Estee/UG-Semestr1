/* Prints out numbers of table 'table' 
in a reversed order: 12, 6, 4, 2, 1 */
#include <stdio.h>

int main() {
   int table[] = {1, 2, 4, 6, 12};
   int reversed[5];
  
   for (int i=0; i<5; i++)
     reversed[4-i] = table[i];
   for (int i=0; i<5; i++)
     printf("%i, ", reversed[i]);

   printf("\n");

       return 0;
}
