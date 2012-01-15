// Prints out stars patterns
// Only prints out the two first
#include <stdio.h>

void printPattern1();
void printPattern2();
void printPattern3();
void printPattern4();

int main()
{

  printPattern1();
  printf("\n");
  printPattern2();
  printf("\n");
  printPattern3();
  printf("\n");
 
  return 0;
}

void printPattern1()
{
  int i,j;
    for( i = 0 ; i < 5 ; i++ ){
       for( j = 0 ; j < i ; j++ ){
           printf("*");
       }
       printf("\n");
    }
}

void printPattern2()
{
  int i,j;
    for( i = 0 ; i < 5 ; i++ ){
       for( j = 0 ; j < 5-i ; j++ ){
           printf("*");
       }
       printf("\n");
    }
}

void printPattern3()
{
  int i,j;
    for( i = 0 ; i < 5 ; i++ ){
       for( j = 5 ; j > i ; j-- )
           printf("*");
       
       printf("\n");
    }
}
