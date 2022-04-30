#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "func.h"
#define N 20

int main(int argc, char* argv[])
{
    char filename[255] = "C:\\Users\\ultra\\CLionProjects\\2021_c_1st_semester\\array.txt";
    char* param = "-q";
    /* if (argc==3) {
         strcpy(filename,argv[2]);
         param = argv[1];
     }
     if (argc==2) {
         strcpy(filename,argv[1]);
         param = "-q";
     }
     else if(argc==1) {
         perror("NO INPUT");
         return(-1);
     }
   */
    FILE* fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error in opening file");
        return (-1);
    }

    int cnt = 1;
    while (fscanf(fp, "%*[^\n]%*c") != EOF)
        cnt++;

    fclose(fp);
    fp = fopen(filename, "r");
    int i = 0; int maxi = 1;
    char c;
    while ((c = getc(fp)) != EOF) {
        while ((c = getc(fp)) && c != '\n' && c != ' ' && c != EOF)
            i++;
        if (i > maxi) {
            maxi = i;
            i = 0;
        }
    }

    fclose(fp);
    fp = fopen(filename, "r");

    // массив строк
    char** s; // указатель на массив
    char* buf = (char*)malloc(maxi + 1);
    int n = 0;

    // ВВОД
    char** STR = (char*)malloc(cnt);
    for (s = STR; n <= cnt; n++, s++) {
        fscanf(fp, "%s", buf);
        if (getc(fp) == EOF)
            break;
        *s = (char*)malloc(strlen(buf) + 1);
        strcpy(*s, buf);
    }
    char** pointer;
    pointer = STR;
    for (s = STR; s < STR + n; s++)
        puts(*s);

    // СОРТИРОВКА
    param = "-b";
    if (strcmp(param, "-b") == 0)
        bubble(STR, cnt);
    else if (strcmp(param, "-i") == 0)
        inserti(pointer, cnt);
    else if (strcmp(param, "-s") == 0)
        selectio(pointer, cnt);
    else
        quicsort(pointer, 0, cnt - 1);

    // ВЫВОД
    for (s = STR; s < STR + n; s++)
        puts(*s);

    free(buf);
    return 0;
}
