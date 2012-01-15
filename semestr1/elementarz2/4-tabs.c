// zlicza znaki odstepu, tabulacji i nowego wiersza
#include <stdio.h>
int main() {
  int c;
  int nb = 0;  /* liczba znaków odstępu */
  int nt = 0;  /* liczba znaków tabulacji */
  int nl = 0;  /* liczba znaków nowego wiersza */

  printf("Wpisz tekst.\n\n");
   while ((c=getchar()) != EOF) {
     if ( c==' ') 
	  nb++;
	  if ( c=='\n' )
	    nl++;
	  if ( c=='\t' )
	    nt++;	
   }
    
   printf("\nliczba znaków odstępu = %d,\ntabulacji = %d,\nnowego wiersza = %d\n\n",
 nb, nt, nl );
   return 0;
}
