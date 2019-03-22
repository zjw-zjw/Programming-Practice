/*
    从标准输入接收一行正文，并统计该行用户指定的某个字符出现的个数
    并打印出结果。

    分析：利用getline()函数，接收用户输入的正文行
          利用count_char()函数，统计正文行中指定字符的个数
*/

#include <stdio.h>
#include <stdlib.h>
#define  N  100

/* 函数声明 */
void getline( char* line);
int count_char( char* line, char c);

int main()
{
    char line[N], ch;
    int cnt;
    printf(" Please input the string( EOF over):\n");
    getline(line);
    printf(" Input the char you want to count : ");
    scanf("%c", &ch);

    if( (cnt=count_char(line, ch)) != 0 ){
        printf(" The '%c' number in this line is %d\n", ch, cnt);
    }
    else {
        printf(" Not find the %c\n", ch);
    }
    return 0;
}

// 获取用户输入的正文行
void getline(char* line)
{
    int i = 0;
    char ch;
    while(i<N && (ch=getchar()) != EOF){
        line[i] = ch;
        i++;
    }
    line[i] = '\0';
}

// 统计指定字符在正文行中出现的个数
int count_char( char* line, char c)
{
    int cnt = 0;
    int i = 0;
    while( line[i] != '\0'){
        if( line[i] == c ){
            cnt++;
        }
        i++;
    }

    return cnt;
}










