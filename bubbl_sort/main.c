/*
    ��ð�ݷ���n���������ݼ���������
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
    printf("��������Ҫ�������(����-1����)��\n");
    while(1) {
        scanf("%d", &a[n]);
        if(a[n] == -1) {
            a[n] = '\0';
            break;
        }
        n++;
    }
    printf("\n�����\n");
    // ����
    bubble_sort(a, n);

    for(i=0; i<n; i++) {
        printf("%6d", a[i]);
    }
    printf("\n");
    return 0;
}
