/*
    求出在100~10000之间有多少个整数，它们的各位数字之和等于5？
*/
#include <stdio.h>
#include <stdlib.h>

// 全局变量
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
    int remainder; // 余数
    int sum;
    for(num=a; num<=b; num++){
        temp = num;
        sum = 0;
        for(times = 0; times < c; times++){
            remainder = temp % 10; // 取出数字的个位数
            temp = temp / 10;      // 取去掉个位数后剩下的数字
            sum += remainder;      // 累加
        }
        if(sum == 5){
            ++cnt; // 计数器加一
            printf(" %6d", num);
            if( cnt % 10 == 0){
                printf("\n"); // 每十个换行
            }
        }
    }

}
