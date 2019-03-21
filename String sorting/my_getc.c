#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  MAX  100

void my_gets( char *p[], int n)
{
    int i;
    char line[MAX];
    char ch;
    for(i=0; i<MAX && (ch=getchar()) != EOF && ch != '\n' ; i++){
        line[i] = ch;
    }
    if(line[i] == '\n'){
        line[i] = ch;
        i++;
    }
    line[i] = '\0';
    p[n] = (char *)malloc(sizeof(line));
    strcpy(p[n], line);
}
