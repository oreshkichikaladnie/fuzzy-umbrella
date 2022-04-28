#include <stdio.h>
#include <math.h>
#include "Header.h"


int main()
{
    int a;
    scanf_s("%d", &a);
    if (a > 0 && round(a) == a)
    {
        printf("%d\n", fact_cycle(a));
        printf("%d\n", fact_recursive(a));
        printf("%lf\n", fact_binet(a));
    }
    else printf("ERROR, NOT CORRECT INPUT");
    return 0;
}

