/*
    ����һ����Ŀ������ѧ�����Ϣ���ļ��С�
                 ѧ����Ϣ�ýṹ��
*/

#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void getList(Student aStu[], int number);
int save(Student aStu[], int number);

int main()
{
    int number = 0;
    printf("������ѧ������: ");
    scanf("%d", &number);
    Student aStu[number]; // ����һ���ṹ������

    getList(aStu, number);
    if ( save(aStu, number)){
        printf("����ɹ���\n");
    }else {
        printf("����ʧ�ܣ�\n");
    }

    return 0;
}
