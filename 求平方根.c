/*
    用迭代法求 x=根号a。
    求平方根的迭代公式为：
                            X(n+1)=(Xn+a/Xn) /2。

    要求前后两次求出的x的差的绝对值小于 10的负5次幂。

    迭代是重复反馈过程的活动，其目的通常是为了逼近所需目标或结果.
    每一次对过程的重复称为一次“迭代”，而每一次迭代得到的结果会作为下一次迭代的初始值。
    重复执行一系列运算步骤，从前面的量依次求出后面的量的过程。
    此过程的每一次结果，都是由对前一次所得结果施行相同的运算步骤得到的。例如利用迭代法*求某一数学问题的解。

*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void) {
    double x1, x2;
    double a;
    printf("输入一个数：");
    scanf("%lf",&a);

    x2 = 1.0; // 初始化变量
    while(1) {
        x1 = x2; // 每一次迭代得到的结果会作为下一次迭代的初始值
        x2 = (x1 + a/x1) / 2.0;
        if (fabs(x1 - x2) < 1e-5) {
            // 前后两次求出的x的差的绝对值小于10的负5次幂。
            printf("%.3f", x2);
            break;
        }
    }

    return 0;
}
/*
---------------------
作者：Pikachu_simple
来源：CSDN
原文：https://blog.csdn.net/qq_42804678/article/details/83626734
版权声明：本文为博主原创文章，转载请附上博文链接！
*/
