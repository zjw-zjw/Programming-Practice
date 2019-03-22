/*
    一个班上有若干名学生，每个学生有四门课程，交互式输入每个学生的各门课程的成绩。
    在用户输入学生序号以后，能输出该学生的全部成绩。用指针函数完成该程序。

    分析：
        把学生定义为一个二维数组，每一行代表一位学生的各科成绩
*/

#include <stdio.h>
#include <stdlib.h>
#define N  4
#define M  4

int *index( int (*ap)[N]);

int main()
{
    int i, j;
    int s[M][N], *p;
    printf("Input scors of %d studnet.\n", M);
    printf("Math, English, Programming, Computer\n");
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            scanf("%d", &s[i][j]);
        }
    }

    p = index(s);
    printf(" The student's scores are as below:\n\n");
    for(i=0; i<N; i++){
        printf(" %5d", *(p+i));
    }
    return 0;
}

int *index( int (*ap)[N]) // ap是指向二维数组中"行数组"指针变量
{
    int n;
    printf("\nInput the order of a student: 1~%d\n", M);
    scanf("%d", &n);
    return (*(ap+n-1)); // 返回指向第n-1行第0列元素的地址
                        // ap[n-1] == *(ap+n-1)
                        // 因为：ap[i] == *(ap + i)
}


