/*
    �ӱ�׼�������һ�����ģ���ͳ�Ƹ����û�ָ����ĳ���ַ����ֵĸ���
    ����ӡ�������

    ����������getline()�����������û������������
          ����count_char()������ͳ����������ָ���ַ��ĸ���
*/

#include <stdio.h>
#include <stdlib.h>
#define  N  100

/* �������� */
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

// ��ȡ�û������������
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

// ͳ��ָ���ַ����������г��ֵĸ���
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










