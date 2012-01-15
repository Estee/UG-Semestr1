// Does NOT work
// inverts the order of an inscription provided by the user
#include <stdio.h>
#define MAX 80

char *reverse(char input[]);

int main()
{
  char ins [MAX], *inv;

  printf("Please enter your string.\n");
  scanf("%[^\t\n]s", ins);
 
  inv = reverse(ins); 

  printf("%s\n", inv);
  return 0;
}

char *reverse(char input[])
{
  int i = 0;
  static char inv[MAX];

  if( *input ) {
    reverse ( input + 1 );
    inv[i++] = *input;
  }
  return inv;
}

