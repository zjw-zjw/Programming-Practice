#include <stdio.h>
#include  "student.h"

void getList(Student aStu[], int number)
{
    // char format[STR_LEN];
    // sprintf(format, "%%%ds", STR_LEN - 1);
    // "%19s"

    int i;
    for ( i=0; i<number; i++) {
        printf("��%d��ѧ��:\n", i);
        printf("\t����: ");
        scanf("%19s", aStu[i].name);
        printf("\t�Ա�(0-��,1-Ů,2-����): ");
        scanf("%d", &aStu[i].gender);
        printf("\t����: ");
        scanf("%d", &aStu[i].age);
    }
}
