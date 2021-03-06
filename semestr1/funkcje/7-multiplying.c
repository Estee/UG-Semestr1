// Program asks the user to calculate 5 multiplications and commens on the results.
// At the end it prints out the amount of good and bad answers.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void getResult(int *result);
int random();
int random2();
int checkAnswer(int x, int y, int input);
void giveFeedback(int c, int y, int z);

int main() {
  int answer, count=5;
  int a, b, n;
  int goodAnswers=0, badAnswers=0;
  
  while( count-- ){
    a=random();
    b=random2();

  printf("%i * %i = ", a, b);
  getResult(&answer); 
    
  n = checkAnswer(a, b, answer);
  giveFeedback(n, a, b);
  
  if( n==1 )
    goodAnswers +=1;
  else
    badAnswers +=1;
 
  }
  printf("\nYou got %i answer(s) correctly and %i answer(s) incorrectly!\n\n", 
	 goodAnswers, badAnswers);
  
  return 0;
}

void getResult(int *result)
{
  scanf("%i", result);
}
int random() {
  srand( time(NULL) );  
  return rand()%100;
}

int random2() {
  srand( time(NULL) );  
  return time(NULL)*rand()%100;
}

int checkAnswer(int x, int y, int input) {
int correctAnswer=x*y;

 if( input==correctAnswer )
   return 1;
 else
   return 2;
}
void giveFeedback(int c, int y, int z){
  if( c==1 )
    printf("Good!\n");
  
  else
    printf("Wrong! The correct answer is %i\n", y*z);
}

