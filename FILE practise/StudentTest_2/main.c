/*
    ����һ����Ŀ����ȡ�ļ�������
*/

#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void read(FILE *fp, int index);

int main(int argc, const char *argv[])
{
    FILE *fp = fopen("student.data", "r"); // ��student.data �ļ�, �Զ��ķ�ʽ
    if(fp){
        fseek(fp, 0L, SEEK_END);  //  Ŀ�ģ�����Ҫ��д��λ���Ƶ���β
                                 //  0L��SEEK_END����˼�Ǵ���β��ʼ��ǰ��������0��λ��,
                                // ����ִ���������䣬��ǰ�ļ�ָ����Ƶ����ļ�ĩβ��λ��

        long size = ftell(fp); // ָ���Ƶ���ĩβ����ftell�������ļ��Ĵ�С
        int number = size / sizeof(Student); // ��˼:�ڸ��ļ����棬�м���Student�����Ľṹ
        int index = 0;
        printf("��%d�����ݣ����뿴�ڼ���: ", number);
        scanf("%d", &index);
        read(fp , index - 1); // index - 1 ��Ŀ����Ϊ�����������ʱ���չ˵�����������
        fclose(fp);
    }else {
        printf("���ļ�ʧ��!\n");
    }

    return 0;
}
