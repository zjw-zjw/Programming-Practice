#include <stdio.h>
#include "student.h"

void read(FILE *fp, int index)
{
    fseek(fp, index*sizeof(Student), SEEK_SET);
    Student stu;
    if (fread(&stu, sizeof(Student), 1, fp) == 1){
        printf("第%d个学生: \n", index + 1);
        printf("\t姓名: %s \n", stu.name);
        printf("\t性别: ");
        switch(stu.gender){
            case 0: printf("男\n"); break;
            case 1: printf("女\n"); break;
            case 2: printf("其他\n"); break;
        }
        // rewind(fp);
        printf("\t年龄: %d\n", stu.age);
    }else {
        printf("读取错误！\n");
    }
}
