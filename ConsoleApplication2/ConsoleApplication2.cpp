#include <stdio.h>

void output(unsigned long long int x)
{
    int i;
    for (i = 1; i <= 32; i++)
    {
        if ((1 << (i - 1) & x) != 0) 
            printf("%d ", i);
    }
    printf("\n");
}
unsigned long long int perevod(unsigned long long int x)
{
    unsigned long long int i, b = 0;
    for (i = 1; i <= 32; i++)
    {
        b += (x % 10) * (1 << (i - 1));
        x = x / 10;
    }
    return b;
}

int main()
{
    unsigned long long int a, b;
    printf("Input a and b\n");
    scanf("%lu%lu", &a, &b);
    a = perevod(a); b = perevod(b);
    output(a); output(b); output(a | b); output(a & b);

    output(a - (a & b)); output((a | b) - (a & b));
    return 0;
}
