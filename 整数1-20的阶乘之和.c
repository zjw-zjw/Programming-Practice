/*
    Test7:求整数1-20的阶乘之和

    例子：1！+ 2！+ 3！+ ... + 20！
*/

#include <stdio.h>

int main(void){
    // long int num = 1;
    long int sum = 0;
    // int temp = 1;
    int i;
    int j;
    /* 用while循环
    while(temp <= 20){
        num = temp * num;
        sum += num;
        temp++;
    }
    */
    ///用两个for循环
    for(i = 1; i <= 20; i++){
        int temp = 1;
        for( j = 1; j <= i; j++){
            temp *= j;
       }
       sum += temp;
    }

    printf("1~20的阶乘等于 %ld\n", sum); // 1~20的阶乘等于 268040729
    return 0;
}
