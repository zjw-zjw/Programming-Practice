/*
    用冒泡法对n个整数按递减次序排序
*/

#include <stdio.h>
#include <stdlib.h>
#define  MAX  100

void bubble_sort(int a[], int len);

int main()
{
    int n = 0;
    int i;
    int a[MAX];
    printf("请输入你要排序的数(输入-1结束)：\n");
    while(1) {
        scanf("%d", &a[n]);
        if(a[n] == -1) {
            a[n] = '\0';
            break;
        }
        n++;
    }
    printf("\n排序后：\n");
    // 排序
    bubble_sort(a, n);

    for(i=0; i<n; i++) {
        printf("%6d", a[i]);
    }
    printf("\n");
    return 0;
}
