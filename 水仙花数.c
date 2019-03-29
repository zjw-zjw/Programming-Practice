/*
    Test12: 如果一个三位数等于它自己的每一位字的立方和，则称此数为“水仙花数”

    样例：153 = 1^3 + 5^3 + 3^3.

    问题：求 100~999之间的全部水仙花数。

    分析：
        A:拆解三位数的每一位数字
            a:利用for循环，从100逐次增一到999
            b:number % 10 得到个位数字
              number / 10 得到原来三位数去掉个位数后的两位数
            c:重操作b步骤，一次得到个、十、百三位数字
        B:判断三个数字的立方之和是否等于该三位数
            bai*bai*bai + shi*shi*shi + ge*ge*ge == number
        C:若等于，输出

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int ge, shi, bai;
    int temp;

    printf("100到999之间的水仙花数为：\n");
    // 利用for循环，从100逐次增一到999
    for(num = 100; num <= 999; num++) {

        ge = num % 10; //得到个位数字
        temp = num / 10; // 得到两位数
        shi = temp % 10; // 得到十位数字
        bai = temp / 10;  // 得到百位数字

        //判断三个数字的立方之和是否等于该三位数
        if(bai*bai*bai + shi*shi*shi + ge*ge*ge == num) {
            printf("%d\t", num);
        }
    }

    return 0;
}
/*
    输出结果为：
                100到999之间的水仙花数为：
                153     370     371     407
*/
