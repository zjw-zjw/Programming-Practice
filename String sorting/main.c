/*
    输入三个字符串，按由小到大顺序输出

    分析：可以利用指针数组，对字符串进行排序后输出
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  MAX  100

void my_gets(char *p[], int n);
void sorted(char *p[]);

int main()
{
    char *p[3]; // 定义一个指针数组
    int i;
    printf("请输入三个字符串:\n");
    // 获取字符串
    for(i=0; i<3; i++){
      my_gets(p, i);
    }
    // 排序
    sorted(p);
    printf("\n排序后的字符串：\n");
    // 输出
    for(i=0; i<3; i++){
        printf("\n%s\n", p[i]);
    }
    return 0;
}



