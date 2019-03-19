/*
    创建一个项目：输入学会的信息到文件中。
                 学生信息用结构体
*/

#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void getList(Student aStu[], int number);
int save(Student aStu[], int number);

int main()
{
    int number = 0;
    printf("请输入学生人数: ");
    scanf("%d", &number);
    Student aStu[number]; // 定义一个结构体数组

    getList(aStu, number);
    if ( save(aStu, number)){
        printf("保存成功！\n");
    }else {
        printf("保存失败！\n");
    }

    return 0;
}
