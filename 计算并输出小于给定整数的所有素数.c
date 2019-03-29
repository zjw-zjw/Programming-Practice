/*
    问题：计算并输出小于给定整数的所有素数。给定整数由用户从键盘录入。

    样例输入：100
    样例输出：11  31 41 61 71

    分析：素数的判定：
        A:试除法
            若一个正整数N为合数，则存在一个能整除出N的数T，其中2 <= T <= sqrt(N)

*/
#include <stdio.h>
#include <stdbool.h> // bool 函数需要用到的头文件

bool IsPrime(int ); //函数声明，判断素数

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
//判断bool函数
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
