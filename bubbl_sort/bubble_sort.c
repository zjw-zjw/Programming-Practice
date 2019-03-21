#include <stdio.h>
#include <stdlib.h>
#define  MAX  100

// 冒泡排序
void bubble_sort(int a[], int len)
{
    int i, j;
    int temp;
    for(i=1; i<len; i++){
        for(j=0; j<len-i; j++){
            if(a[j] < a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
