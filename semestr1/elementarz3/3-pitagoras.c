// Pythagorean triangles
#include <stdio.h>
#include <math.h>

void triangle(double count);
int ifInteger(double a);

int main()
{
    double a;

    a = 1000;
    triangle(a);

    return 0;
}

void triangle(double count)
{
    double a, b, c, perimeter;

    a = 1;                     
    while ((a * 2) < count) {    
        b = a;                 
        perimeter = 0;

        while (perimeter < count) {  
            c = sqrt(pow(a, 2) + pow(b, 2));
            perimeter = a + b + c;

            if (perimeter > count)    
                break;


            if (ifInteger(c)) {
                printf("%0.0f^2 + %0.0f^2 = %0.0f^2\tPerimeter:%0.0f\n", a, b,
                       c, perimeter);
            }
            ++b;
        }
        ++a;
    }
}

int ifInteger(double a)
{
    long long int temp;
    double b;

    temp = (long long int) a;
    b = (double) temp;

    if (a == b)
        return 1;

    return 0;
}
