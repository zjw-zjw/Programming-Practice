/*
    �����100~10000֮���ж��ٸ����������ǵĸ�λ����֮�͵���5��
*/
#include <stdio.h>
#include <stdlib.h>

// ȫ�ֱ���
int cnt = 0;

void spec_num(int a, int b, int c);

int main()
{
    spec_num(104, 500, 3);
    spec_num(1004, 5000, 4);

    printf("Total = %d\n", cnt);
    return 0;
}

void spec_num(int a, int b, int c)
{
    int num, temp, times;
    int remainder; // ����
    int sum;
    for(num=a; num<=b; num++){
        temp = num;
        sum = 0;
        for(times = 0; times < c; times++){
            remainder = temp % 10; // ȡ�����ֵĸ�λ��
            temp = temp / 10;      // ȡȥ����λ����ʣ�µ�����
            sum += remainder;      // �ۼ�
        }
        if(sum == 5){
            ++cnt; // ��������һ
            printf(" %6d", num);
            if( cnt % 10 == 0){
                printf("\n"); // ÿʮ������
            }
        }
    }

}
