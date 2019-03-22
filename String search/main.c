/*
    顺序查找，即从表头开始，根据给定模式，逐次与表中元素相比较
    这里我们设定元素为字符串。如果找到，则查找成功；如果查完整个表都没找到
    则查找失败。

    分析：
        A:需要几个函数：readline()读入输入的字符串，为其动态分配空间
                      sqsr() 查找指定元素(字符串)
        B:利用指针数组，数组的元素指向一个字符串

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 10
#define N 100

/* 函数声明 */
int readline( char *lineptr[], int max );            // 读入输入的字符串
void sqsr( char *list[], char *object, int len);  // 查找指定元素(字符串)

int main()
{
    char *lineptr[M];
    char object[N];
    int nlines;
    printf(" Please input the object string:\n");
    gets( object );
    printf(" Please input %d strings searched:\n", M);
    if( (nlines=readline(lineptr, M)) >= 0){
        sqsr(lineptr, object, nlines);
    }else {
        printf(" Fail!\n");
    }


    return 0;
}

/* read input lines */
int readline( char *lineptr[], int max)
{
    int i, len;
    char line[N], *p;

    for(i=0; i<max; i++){
        gets(line);
        len = strlen(line);
        if( (p=(char *)calloc( len+1, 1)) == NULL){ // 为新输入的字符串分配空间
            return -1;
        }else {
            strcpy(p, line);
            lineptr[i] = p;
        }
    }
    return i;
}

/* search the object line */
void sqsr(char* list[], char *object, int len)
{
    char **p = list;
    while( p < list+len ){
        if( strcmp(*p, object) == 0){
            break;
        }else{
            p++;
        }
    }

    if(p < list+len) {
        printf("Success! The sequential number = %d\n", p-list);
    }
    else {
        printf(" \nUnsuccess!\n");
    }
}





