#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 0, i;
    char* m;
    m = (char*)malloc(50 * sizeof(char));
    scanf("%50s", m);

    for (i = 0; m[i] != '\0'; i++)
        c++;
    for (i = c - 1; i >= 0; i--)
        printf("%c", m[i]);
   free(m);

}
