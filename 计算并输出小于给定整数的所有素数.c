/*
    ���⣺���㲢���С�ڸ������������������������������û��Ӽ���¼�롣

    �������룺100
    ���������11  31 41 61 71

    �������������ж���
        A:�Գ���
            ��һ��������NΪ�����������һ����������N����T������2 <= T <= sqrt(N)

*/
#include <stdio.h>
#include <stdbool.h> // bool ������Ҫ�õ���ͷ�ļ�

bool IsPrime(int ); //�����������ж�����

int main(void)
{
    int num;
    int i;
    printf("Input a number:\n");
    scanf("%d", &num);

    for(i = 3; i <= num; i++){
        if(IsPrime(i))
            printf("%d\t", i);
        else
            continue;
    }

    return 0;
}
//�ж�bool����
bool IsPrime(int val){
    int i;
    for(i = 2; i < val; i++){
        if(val % i == 0)
            break;
    }
    if(i == val)
        return true;
    else
        return false;
}
