/*
    将一个5*5的矩阵中最大的元素放在中心，4个角分别放4个最小的元素
    (顺序为从左至右、从上至下依次从小到大存放)，写一个函数实现之。
    用main函数调用它。

    解题思路：将它想象成是一个一维数组，利用冒泡排序的思想，
    每次循环把一个最大值放在最后，然后数组范围减1，依次类推
    当循环结束时，数组元素是升序排列。
    接着再把前4个元素分别放到(0,0),(0,N-1),(N-1,0),(N-1,N-1)上
    和把最大值放在中间即可

*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

void display(int a[N][N]);

int main()
{
    int i, j;
    int max, min;
    int x, y;
    int a[N][N];
    printf("Input 5*5 matrix number: \n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The initial matrix is :\n");
    for(i=0; i<N; i++) {
        printf("\n");
        for(j=0; j<N; j++) {
            printf(" %3d", a[i][j]);
        }
    }

    // 调用函数
    display(a);

    printf("\nThe after matrix is :\n");
    for(i=0; i<N; i++) {
        printf("\n");
        for(j=0; j<N; j++) {
            printf(" %3d", a[i][j]);
        }
    }

    return 0;
}

void display(int a[N][N])
{
    int i, j, temp;
    int *ap = a;

    // 遍历数组，每次把最大的元素放在最后，然后数组范围缩小一格
    // 两层循环结束后，数组元素就已经是升序排列了
    for(i=1; i<N*N; i++) {
        for(j=0; j<N*N-i; j++) {
            if(*(ap+j) > *(ap+j+1)) {
                temp = *(ap+j);
                *(ap+j) = *(ap+j+1);
                *(ap+j+1) = temp;
            }
        }
    }
    // 把第二小的元素放在(0, N-1)上
    temp = a[0][1];
    a[0][1] = a[0][N-1];
    a[0][N-1] = temp;

    // 把第三小的元素放在(N-1, 0)上
    temp = a[0][2];
    a[0][2] = a[N-1][0];
    a[N-1][0]= temp;

    temp = a[N/2][N/2];
    a[N/2][N/2] = a[N-1][N-1];  // 把末尾的最大值给中间
    a[N-1][N-1] = a[0][3];      // 把第四小的元素放在(N-1, N-1)
    a[0][3] = temp;
}





