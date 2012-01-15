/* Napisz program tworzący histogram częstości występowania 
różnych znaków podanych na stdin. */
#include <stdio.h>
#include <string.h>

void proc_in_stats();

int main()
{
  printf("Enter your text here: ");
  proc_in_stats();
  printf("\n");

  return 0;
}

void proc_in_stats()
{
  int char_count[ 128 ] = { 0 };
  char buff[ 64 ];
  int rv = 0;
  int i;
  size_t j, len;
  for( i = 0 ; i < 5 ; i += 1 ) {
    rv = scanf( "%s", buff );
    if( rv <= 0 ) {
      return;
    }
    else {
      len = strlen( buff );
      for( j = 0 ; j < len ; j += 1 ) {
        char_count[ (int)buff[ j ] ] += 1;
      }
    }
  }
  for( i = 0 ; i < 128 ; i += 1 ) {
    if( char_count[ i ] > 0 ) {
      printf( "\nZnak '%c' wystapil %d razy.", (char)i, char_count[ i ]);
    }
  }
}
