#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  FILE *fout;  /* uchwyt do pliku wyjściowego */
  double x, step = 0.1, r;

  if (argc != 2) {
    printf("Użycie: %s DEST\n", argv[0]);
    return 3;
  }
  if ((fout = fopen(argv[1], "w")) == NULL) {
    printf("Nie mogę otworzyć pliku do zapisu '%s'\n", argv[1]);
    return 2;
  }

  printf("Zapisuję dane do pliku: %s\n", argv[1]);

  x = 0.0;
  while (x <= 1.0) {
    r = (double) rand() / RAND_MAX;
    fprintf(fout, "%.1f %.2f %.2f\n", x, x*x, r);
    x += step;
  }

  fclose(fout);

  return 0;
}
