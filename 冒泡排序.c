/*
    ���⣺����ð�����򣬶�һ�����ֽ�������
        ��С����
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int temp;
    int n;
    int arr[100];
    printf("N = ?\n");
    scanf("%d", &n);
    if(n > 100){
        printf("������ķ�Χ����");
        return ;
    }
    printf("������ %d ������\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // ����ʼ
    for (i = 1; i < n; i++){
        for(j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // ��������Ľ��
    printf("�����Ľ��Ϊ:\n");
    for(i = 0; i < n; i++){
        printf("%d\t", arr[i]);
        if((i+1) % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}
