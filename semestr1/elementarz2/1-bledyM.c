// 1 + 2 + 3 +...+ n >= M
#include <stdio.h>
int main() {
  int M, n = 0;
  int suma = 0;
  int i = 1;

  printf("Podaj liczbe M: ");
  scanf("%d", &M);

  while ( suma < M ) {
     suma += i;
     i += 1;
     n += 1;
  }
    printf("Szukane n to: %d\.n", n);
  return 0;
}
