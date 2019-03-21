/*
    将数组中的n个整数按相反顺序存放，并输出对换后的结果。
*/

#include <stdio.h>
#include <stdlib.h>
#define N  10

void swap_arr(int *a, int len);

int main()
{
    int n;
    int a[N];
    int i = 0;
    printf("请输入 %d 个整数：\n", N);
    while(1){
        if( i > N-1){
            break;
        } else{
            scanf("%d", &a[i]);
            i++;
        }
    }
    n = i;
    printf("原数组是元素：\n");
    for(i=0; i<N; i++){
         printf("%d   ", a[i]);
    }
    printf("\n对换后的数组元素：\n");
    swap_arr(&a, n);
    for(i=0; i<N; i++){
        printf("%d   ", a[i]);
    }

    return 0;
}

void swap_arr(int *a, int len)
{
    int i = 0;
    int j = len -1;
    int temp;
    while( i < j){
        temp = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = temp;
        i++;
        j--;
    }
}
