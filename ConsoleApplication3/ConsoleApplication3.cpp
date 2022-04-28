#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Vvedite chisla\n"); scanf("%f %f %f", &a, &b, &c);

    a == 0 ? b == 0 ? printf("no solutions") :
        printf("%f", -c / b) : (pow(b, 2) - 4 * a * c) > 0 ?
        printf("%f %f", (-b + (pow(b, 2) - 4 * a * c)) / 2 * a, (-b - (pow(b, 2) - 4 * a * c)) / 2 * a) : (pow(b, 2) - 4 * a * c) == 0 ? printf("%f", -b / 2 * a) :
        printf("no solutions");

}