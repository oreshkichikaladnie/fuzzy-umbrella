#ifndef N
#define N 20
#endif
#include <string.h>
#include<stdio.h>
#include <stdlib.h>

int swapping(char* x, char* y)
{
    char* tmp = "";
    strcpy(tmp, x);
    strcpy(x, y);
    strcpy(y, tmp);
    return 0;
}

int inserti(char** x, int len)
{
    printf("Insertion sorting: \n");
    for (int i = 1; i < len; i++)
        for (int j = i; j > 0 && strcmp(*(x + (j - 1)), *(x + j)) == 1; j--)
            swapping(*(x + j), *(x + (j - 1)));
    return 0;
}

int bubble(char** x, int len)
{
    printf("Bubble sorting: \n");
    for (int i = 1; i < len; i++)
        for (int j = 0; j < len - i; j++) {
            if (strcmp(*(x + j), *(x + (j + 1))) == 1)
                swapping(*(x + j), *(x + (j + 1)));
        }
    return 0;

}

int selectio(char** x, int len)
{
    printf("Selection sorting: \n");
    char* max;
    int max_num;
    for (int j = 0; j < len; j++)
    {
        max = "";

        max_num = 0;
        for (int i = 0; i < len - j - 1; i++)
        {
            if (strcmp(*(x + i), max) == 1)
            {

                strcpy(max, *(x + i));
                max_num = i;
            }
        }
        swapping(*(x + (len - j - 1)), *(x + max_num));
    }
    return 0;
}

int quicsort(char** x, int b, int e)
{
    printf("Quick sorting: \n");
    int l = b, r = e;
    char* piv = (char*)malloc(strlen(*(x + ((l + r) / 2))) + 1);
    strcpy(piv, *(x + ((l + r) / 2)));
    while (l <= r) {
        while (strcmp(*(x + l), piv) == -1)
            l++;
        while (strcmp(*(x + r), piv) == 1)
            r--;
        if (l <= r) { swapping(*(x + l), *(x + r)); r--; l++; }
    }
    if (b < r)
        quicsort(x, b, r);
    if (e > l)
        quicsort(x, l, e);
    return 0;
}