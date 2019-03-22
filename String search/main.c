/*
    ˳����ң����ӱ�ͷ��ʼ�����ݸ���ģʽ����������Ԫ����Ƚ�
    ���������趨Ԫ��Ϊ�ַ���������ҵ�������ҳɹ����������������û�ҵ�
    �����ʧ�ܡ�

    ������
        A:��Ҫ����������readline()����������ַ�����Ϊ�䶯̬����ռ�
                      sqsr() ����ָ��Ԫ��(�ַ���)
        B:����ָ�����飬�����Ԫ��ָ��һ���ַ���

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 10
#define N 100

/* �������� */
int readline( char *lineptr[], int max );            // ����������ַ���
void sqsr( char *list[], char *object, int len);  // ����ָ��Ԫ��(�ַ���)

int main()
{
    char *lineptr[M];
    char object[N];
    int nlines;
    printf(" Please input the object string:\n");
    gets( object );
    printf(" Please input %d strings searched:\n", M);
    if( (nlines=readline(lineptr, M)) >= 0){
        sqsr(lineptr, object, nlines);
    }else {
        printf(" Fail!\n");
    }


    return 0;
}

/* read input lines */
int readline( char *lineptr[], int max)
{
    int i, len;
    char line[N], *p;

    for(i=0; i<max; i++){
        gets(line);
        len = strlen(line);
        if( (p=(char *)calloc( len+1, 1)) == NULL){ // Ϊ��������ַ�������ռ�
            return -1;
        }else {
            strcpy(p, line);
            lineptr[i] = p;
        }
    }
    return i;
}

/* search the object line */
void sqsr(char* list[], char *object, int len)
{
    char **p = list;
    while( p < list+len ){
        if( strcmp(*p, object) == 0){
            break;
        }else{
            p++;
        }
    }

    if(p < list+len) {
        printf("Success! The sequential number = %d\n", p-list);
    }
    else {
        printf(" \nUnsuccess!\n");
    }
}





