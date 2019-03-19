/*
    创建一个项目：读取文件的数据
*/

#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void read(FILE *fp, int index);

int main(int argc, const char *argv[])
{
    FILE *fp = fopen("student.data", "r"); // 打开student.data 文件, 以读的方式
    if(fp){
        fseek(fp, 0L, SEEK_END);  //  目的：把我要读写的位置移到最尾
                                 //  0L，SEEK_END的意思是从最尾开始往前倒过来算0个位置,
                                // 所以执行完这个语句，当前文件指针就移到了文件末尾的位置

        long size = ftell(fp); // 指针移到最末尾，则ftell表达的是文件的大小
        int number = size / sizeof(Student); // 意思:在个文件里面，有几个Student这样的结构
        int index = 0;
        printf("有%d个数据，你想看第几个: ", number);
        scanf("%d", &index);
        read(fp , index - 1); // index - 1 的目的是为了让人输入的时候照顾到正常的排序
        fclose(fp);
    }else {
        printf("打开文件失败!\n");
    }

    return 0;
}
