#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  MAX 100


void sorted(char *p[])
{
    int *temp;
    int i, j;
    for(i=1; i<3; i++){
        for(j=0; j<2; j++){
            if( strcmp(p[j], p[j+1]) > 0){
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}
