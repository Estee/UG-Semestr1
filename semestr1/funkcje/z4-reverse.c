// Does not work ;) => Naruszenie ochrony pamieci.
// Reverses a number
#include <stdio.h>

void reverse(int n);

int main()
{
  int num;
  printf("Please enter your number: ");
  scanf("%d", &num);
  reverse(num);

  return 0;
}

void reverse(int n)
{
  int i;
  char array[48];

  snprintf(array, 10, "%d", n);
  
  while( n ) {
    i++;
    n /= 10;
  }
  while( --i >= 0 ) {
    printf("%c", array[i]);
  }
  printf("\n");
}
