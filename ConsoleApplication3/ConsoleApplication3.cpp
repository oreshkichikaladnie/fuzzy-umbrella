#include <iostream>
#include <math.h>

int main()
{
    double a, b, c;
    printf("Vvedite chisla\n"); scanf("%d %d %d", &a, &b, &c);

    if (a == 0){
        if(b==0)
            printf("no solutions\n");
        else
            printf("the solution is %d\n",-c/b);
    }
    else{
        double d=b*b-4*a*c;
        if (d>0)
            printf("the solutions are %d %d\n",(-b + sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
        if (d==0)
            printf("the solution is %d\n",-b/(2*a));
        else
            printf("No solutions \n");
    }
    return 0;
}
