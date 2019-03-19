#include <stdio.h>
#include "student.h"

int save(Student aStu[], int number)
{
    int ret = -1;
    FILE *fp = fopen("Student.data", "w");
    if (fp){
     ret = fwrite(aStu, sizeof(Student), number, fp);
     fclose(fp);
    }

    return ret == number;
}
