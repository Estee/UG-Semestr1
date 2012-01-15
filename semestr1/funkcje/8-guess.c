// Program generates a number ftom 1 through 1000 for the user to guess.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int generate();
void getResult(int *number);
int checkResult(int usersNumber, int correctNumber);
void giveFeedback(int feed);
int stop(int a);

int main() 
{
  int x=generate();
  int answer, comment;
  do {
    printf("Enter a number from 1 through 1000: ");
    getResult(&answer); 
    comment=checkResult(answer, x);
    giveFeedback(comment);
  }
  while ( stop(comment)!=1 );

  return 0;
}

int generate() {
  srand( time(NULL) );  
  return 1+rand()%1000;
}

void getResult(int *number)
{
  scanf("%d", number);
}

int checkResult(int usersNumber, int correctNumber)
{
  if( usersNumber==correctNumber )
    return 1;
  else if( usersNumber<correctNumber )
    return 2;
  else if( usersNumber>correctNumber )
    return 3;
  else
    return 0;
}
void giveFeedback(int feed)
{
  switch( feed ){
  case 1:
    printf("That's it! You win! Congrats\n");
    break;
  case 2:
    printf("Too little. Try again.\n");
    break;
  case 3:
    printf("Too much. Try again.\n");
    break;
  }
}

  int stop(int a)
  {
    if( a==1 )
      return 1;
    else
      return 2;
  }
