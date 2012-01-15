// printd out a square, oval, arrow and diamond ==>
// ==> only prints aquare and arrow!
#include <stdio.h>

void rectangle(int width, int height);
//void oval(int width, int height);
void arrow(int height);
// void diamond(int width, int height);

int main()
{
  int recA, recB, arrowA;
  printf("Please enter the rectangle's width: ");
  scanf("%i", &recA);
  printf("Please enter the rectangle's hight: ");
  scanf("%i", &recB);
  printf("Please enter the arrow's hight (min is 4): ");
  scanf("%i", &arrowA);
  rectangle( recA, recB );
  arrow( arrowA );
  return 0;
}

void rectangle(int width, int height)
{
  int space = width - 2;
  for( int i = 0 ; i < width ; i++ )
    putchar('*');
  printf("\n");
  for( int j = 0 ; j < height - 2; j++ ){
    putchar( '*' );
    for( int i = 0 ; i < space ; i++ ) 
      printf(" ");
    putchar( '*' );
    printf("\n");
  }
  for( int i = 0 ; i < width ; i++ )
    putchar('*');
  printf("\n\n");
}

void arrow(int height)
{
  printf("  *  \n *** \n*****\n");
  for( int i = 0 ; i < height-3 ; i++ )
    printf("  *  \n");
  printf("\n");
}
