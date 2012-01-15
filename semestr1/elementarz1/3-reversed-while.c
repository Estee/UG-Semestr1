/* Prints out numbers of table 'table' 
in a reversed order: 12, 6, 4, 2, 1 */
#include <stdio.h>

int main() {
   int table[] = {1, 2, 4, 6, 12};
   int reversed[5];
   int i=0;

   while (i<5){
     reversed[4-i] = table[i];
   i++;
   }
   i=0;
   while (i<5){
     printf("%i, ", reversed[i]);
     i++;
   }
   printf("\n");

       return 0;
}
