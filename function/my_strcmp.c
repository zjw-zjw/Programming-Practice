/*
    ��д���򣬱Ƚ������ַ�����С���ַ������û����롣
*/

#include <stdio.h>
#include <stdlib.h>

int my_strcmp(char* s1, char* s2);

int main()
{
    char s1[100];
    char s2[100];
    printf("�������һ���ַ�����");
    gets(s1);
    printf("\n");
    printf("������ڶ����ַ���: ");
    gets(s2);
    int n;
    if ( (n = my_strcmp(s1, s2)) > 0){
        printf("��һ���ַ�����\n");
    }
    else if(n == 0){
        printf("�����ַ������\n");
    }
    else {
        printf("�ڶ����ַ�����\n");
    }
    return 0;
}

int my_strcmp(char* s1, char* s2)
{
    while ( *s1 == *s2 ){
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
