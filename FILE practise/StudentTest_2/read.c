#include <stdio.h>
#include "student.h"

void read(FILE *fp, int index)
{
    fseek(fp, index*sizeof(Student), SEEK_SET);
    Student stu;
    if (fread(&stu, sizeof(Student), 1, fp) == 1){
        printf("��%d��ѧ��: \n", index + 1);
        printf("\t����: %s \n", stu.name);
        printf("\t�Ա�: ");
        switch(stu.gender){
            case 0: printf("��\n"); break;
            case 1: printf("Ů\n"); break;
            case 2: printf("����\n"); break;
        }
        // rewind(fp);
        printf("\t����: %d\n", stu.age);
    }else {
        printf("��ȡ����\n");
    }
}
