/*
    �������е�n���������෴˳���ţ�������Ի���Ľ����
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
    printf("������ %d ��������\n", N);
    while(1){
        if( i > N-1){
            break;
        } else{
            scanf("%d", &a[i]);
            i++;
        }
    }
    n = i;
    printf("ԭ������Ԫ�أ�\n");
    for(i=0; i<N; i++){
         printf("%d   ", a[i]);
    }
    printf("\n�Ի��������Ԫ�أ�\n");
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
