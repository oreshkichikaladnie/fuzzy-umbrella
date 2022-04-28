#define _USE_MATH_DEFINES
#include <math.h>

int fact_cycle(int n) {
    int fib1 = 1, fib2 = 1, sum;

    for (int i = 1; i <= n - 2; i++) {
        sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = sum;
    }
    return fib2;
}

int fact_recursive(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fact_recursive(n - 1) + fact_recursive(n - 2);
}

double fact_binet(int n) {
    return (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);
}