/*
    编写程序，比较两个字符串大小，字符串由用户键入。
*/

#include <stdio.h>
#include <stdlib.h>

int my_strcmp(char* s1, char* s2);

int main()
{
    char s1[100];
    char s2[100];
    printf("请输入第一个字符串：");
    gets(s1);
    printf("\n");
    printf("请输入第二个字符串: ");
    gets(s2);
    int n;
    if ( (n = my_strcmp(s1, s2)) > 0){
        printf("第一个字符串大\n");
    }
    else if(n == 0){
        printf("两个字符串相等\n");
    }
    else {
        printf("第二个字符串大\n");
    }
    return 0;
}

int my_strcmp(char* s1, char* s2)
{
    while ( *s1 == *s2 ){
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
