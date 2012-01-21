// Malfunction - too many warnings, no search ;)

#include <stdio.h>

void sort(int *table, int **tablePointer);

int main()
{
  int i;
  int table[] = { 10, 2, 33, 1 };
  int *tablePointer = &table[0];

  putchar('[');
  for( i = 0 ; i < 4 ; i++ ) {
    printf(" %d ", *(tablePointer + i) );
  }
  putchar(']');
  printf("\n");

  sort(table, tablePointer);
 
  return 0;
}

void sort(int *table, int **tablePointer)
{
  int i, max, temp[4];
  
  max = table[0];
  for( i = 0 ; i < 4 ; i++ ){
    if( table[i] > max ) {
      max = table[i];
      temp[4-i] = max;
      temp[4-i] = *tablePointer[i];
      printf("%d ", tablePointer[i]);
    }
  }
}
