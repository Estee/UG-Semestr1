/* Program ten wykonuje konwersję ze stopni na radiany
   według wzoru: rad = 2 * PI * deg / 360    */
#include <stdio.h>
#include <math.h>
int main() {
   double deg, rad;
   printf("Podaj kat w stopniach : ");
   scanf("%lf", &deg);
   rad = 2*M_PI*deg/360 ;  /* grep PI /usr/include/math.h */
   printf("%lf deg = %lf rad\n", deg, rad);
   return 0;
}
