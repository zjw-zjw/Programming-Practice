/*
    输入一个5 * 5的矩阵，然后转置
*/

#include <stdio.h>
#define N  5

int main()
{
    int a[N][N];
    int *p[N];  // p是一个指向行数组的指针
    int i, j;
    printf(" Please input 5*5 matrix: \n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // 将指针p指向二维数组的每一行
    for(i=0; i<N; i++) {
        p[i] = a[i];
    }
    // 输出原始矩阵
    printf(" The initial matrix is below:\n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf(" %3d", p[i][j]);
        }
        printf("\n");
    }

    // 转置
    int temp;
    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){ // 这里因为在一个正方形矩阵中，对角线的元素转置过后位置是不变的
            temp = *(p[i] + j);
            *(p[i] + j) = *(p[j] + i);
            *(p[j] + i) = temp;
        }
    }
    // 输出转置后的矩阵
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
