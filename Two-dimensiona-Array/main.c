/*
    ��һ��5*5�ľ���������Ԫ�ط������ģ�4���Ƿֱ��4����С��Ԫ��
    (˳��Ϊ�������ҡ������������δ�С������)��дһ������ʵ��֮��
    ��main������������

    ����˼·�������������һ��һά���飬����ð�������˼�룬
    ÿ��ѭ����һ�����ֵ�������Ȼ�����鷶Χ��1����������
    ��ѭ������ʱ������Ԫ�����������С�
    �����ٰ�ǰ4��Ԫ�طֱ�ŵ�(0,0),(0,N-1),(N-1,0),(N-1,N-1)��
    �Ͱ����ֵ�����м伴��

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

    // ���ú���
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

    // �������飬ÿ�ΰ�����Ԫ�ط������Ȼ�����鷶Χ��Сһ��
    // ����ѭ������������Ԫ�ؾ��Ѿ�������������
    for(i=1; i<N*N; i++) {
        for(j=0; j<N*N-i; j++) {
            if(*(ap+j) > *(ap+j+1)) {
                temp = *(ap+j);
                *(ap+j) = *(ap+j+1);
                *(ap+j+1) = temp;
            }
        }
    }
    // �ѵڶ�С��Ԫ�ط���(0, N-1)��
    temp = a[0][1];
    a[0][1] = a[0][N-1];
    a[0][N-1] = temp;

    // �ѵ���С��Ԫ�ط���(N-1, 0)��
    temp = a[0][2];
    a[0][2] = a[N-1][0];
    a[N-1][0]= temp;

    temp = a[N/2][N/2];
    a[N/2][N/2] = a[N-1][N-1];  // ��ĩβ�����ֵ���м�
    a[N-1][N-1] = a[0][3];      // �ѵ���С��Ԫ�ط���(N-1, N-1)
    a[0][3] = temp;
}





