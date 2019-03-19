#include <stdio.h>
#include  "student.h"

void getList(Student aStu[], int number)
{
    // char format[STR_LEN];
    // sprintf(format, "%%%ds", STR_LEN - 1);
    // "%19s"

    int i;
    for ( i=0; i<number; i++) {
        printf("第%d个学生:\n", i);
        printf("\t姓名: ");
        scanf("%19s", aStu[i].name);
        printf("\t性别(0-男,1-女,2-其他): ");
        scanf("%d", &aStu[i].gender);
        printf("\t年龄: ");
        scanf("%d", &aStu[i].age);
    }
}
