// Bez usrednienia, nie zapisuje do pliku

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
  int i;

  for( i=1; i<=1000; i++) {
    printf("%d, ", rand() %1000);
  }
  printf("\n");

    return 0;
  }
