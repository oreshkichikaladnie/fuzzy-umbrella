#include <stdio.h>

int vivod(unsigned long int x)
{
    int i;
    for (i = 1; i <= 32; i++)
    {
        if ((1 << (i - 1) & x) != 0) printf("%d ", i);
    }
    printf("\n");
}
unsigned long int perevod(unsigned long int x)
{
    unsigned long int i, b = 0;
    for (i = 1; i <= 32; i++)
    {
        b += (x % 10) * (1 << (i - 1));
        x = x / 10;
    }
    return b;
}

int main()
{
    unsigned long int a, b;
    printf("Input a and b\n");
    scanf("%lu%lu", &a, &b);
    a = perevod(a); b = perevod(b);
    vivod(a); vivod(b); vivod(a | b); vivod(a & b);

    vivod(a - (a & b)); vivod((a | b) - (a & b));
    return 0;
}