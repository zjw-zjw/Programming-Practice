/*
    ����һ��5 * 5�ľ���Ȼ��ת��
*/

#include <stdio.h>
#define N  5

int main()
{
    int a[N][N];
    int *p[N];  // p��һ��ָ���������ָ��
    int i, j;
    printf(" Please input 5*5 matrix: \n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // ��ָ��pָ���ά�����ÿһ��
    for(i=0; i<N; i++) {
        p[i] = a[i];
    }
    // ���ԭʼ����
    printf(" The initial matrix is below:\n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf(" %3d", p[i][j]);
        }
        printf("\n");
    }

    // ת��
    int temp;
    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){ // ������Ϊ��һ�������ξ����У��Խ��ߵ�Ԫ��ת�ù���λ���ǲ����
            temp = *(p[i] + j);
            *(p[i] + j) = *(p[j] + i);
            *(p[j] + i) = temp;
        }
    }
    // ���ת�ú�ľ���
    printf("\n");
    printf(" The changed matrix is :\n");
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            printf(" %3d", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
