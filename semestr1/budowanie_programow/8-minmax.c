// Calculates which number is the greatest, the smallest
// the product of all the numbers and their sum
#include <stdio.h>
#include <math.h>

int main() {

  double num1, num2, num3;
  double sum, product, min, max;

  printf("Wprowadz trzy liczby calkowite: ");
  scanf("%lf%lf%lf", &num1, &num2, &num3);

  sum= num1+num2+num3;
  printf("Suma wynosi: %.2lf\n", sum);

  product= num1*num2*num3;
  printf("Iloczyn wynosi: %.2lf\n", product);

  max=num1;
  min=num1;
  if( num2>num1 )
    max=num2;
  else
    min=num2;
  if( num3>max )
    max=num3;
  if( num3<min )
    min=num3;

  printf("Najmniejsza liczba to: %.2lf\n", min);
  printf("Najwieksza liczba to: %.2lf\n", max);

  return 0;
}
