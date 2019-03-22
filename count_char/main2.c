/*
    输入一行文字，找出其中大写字母、小写字母、空格、数字
    以及其他字符各有多少？
*/

#include <stdio.h>
#include <string.h>
#define  MAX 30

/* 函数声明 */
void get_line(char *s, int lim);
void count_char(char *s);


int main()
{
    char s[MAX];
    char *p = s;
    printf("Input a line:\n");
    get_line(s, MAX);
    count_char(s);
    return 0;
}

void get_line(char *s, int lim)
{
    int i, c;
    for(i=0; i<lim && (c=getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    if( s[i] == '\n') { s[i] = c; }
}

void count_char(char *s)
{
    int i, len;
    int num  =0;
    int space=0;
    int up   =0;
    int low  =0;
    int other=0;
    len = strlen(s);
    for(i=0; i<len; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')              { up++; }
            else if(s[i] >= 'a' && s[i] <= 'z')     { low++;}
                else if(s[i] >= '0' && s[i] <= '9') { num++;}
                    else if(s[i] == ' ')            { space++; }
                        else                        { other++; }
    }

    printf("The numbers of upper = %d\n", up);
    printf("The numbers of lower = %d\n", low);
    printf("The numbers of number= %d\n", num);
    printf("The numbers of space = %d\n", space);
    printf("The numbers of other = %d\n", other);
}




