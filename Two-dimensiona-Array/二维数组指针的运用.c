/*
    һ��������������ѧ����ÿ��ѧ�������ſγ̣�����ʽ����ÿ��ѧ���ĸ��ſγ̵ĳɼ���
    ���û�����ѧ������Ժ��������ѧ����ȫ���ɼ�����ָ�뺯����ɸó���

    ������
        ��ѧ������Ϊһ����ά���飬ÿһ�д���һλѧ���ĸ��Ƴɼ�
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

int *index( int (*ap)[N]) // ap��ָ���ά������"������"ָ�����
{
    int n;
    printf("\nInput the order of a student: 1~%d\n", M);
    scanf("%d", &n);
    return (*(ap+n-1)); // ����ָ���n-1�е�0��Ԫ�صĵ�ַ
                        // ap[n-1] == *(ap+n-1)
                        // ��Ϊ��ap[i] == *(ap + i)
}


