/*
    ���������ַ���������С����˳�����

    ��������������ָ�����飬���ַ���������������
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  MAX  100

void my_gets(char *p[], int n);
void sorted(char *p[]);

int main()
{
    char *p[3]; // ����һ��ָ������
    int i;
    printf("�����������ַ���:\n");
    // ��ȡ�ַ���
    for(i=0; i<3; i++){
      my_gets(p, i);
    }
    // ����
    sorted(p);
    printf("\n�������ַ�����\n");
    // ���
    for(i=0; i<3; i++){
        printf("\n%s\n", p[i]);
    }
    return 0;
}



