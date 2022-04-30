#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("Vvedite chisla\n"); scanf("%d %d %d", &a, &b, &c);

    if (a == 0 && b == 0)
        printf("no solutions");
    if (a==0 && b != 0) 
        printf("%d", -c / b);
    if ((b*b - 4 * a * c) > 0 && a!=0)
        printf("%d %d", (-b + sqrt(b*b - 4 * a * c)) / (2 * a), (-b - sqrt(b*b - 4 * a * c)) / (2 * a)));
    if (a!=0 && (b*b - 4 * a * c) == 0) 
        printf("%d", -b / 2 * a);
    else
        printf("no solutions");
        return 0;
}
