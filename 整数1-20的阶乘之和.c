/*
    Test7:������1-20�Ľ׳�֮��

    ���ӣ�1��+ 2��+ 3��+ ... + 20��
*/

#include <stdio.h>

int main(void){
    // long int num = 1;
    long int sum = 0;
    // int temp = 1;
    int i;
    int j;
    /* ��whileѭ��
    while(temp <= 20){
        num = temp * num;
        sum += num;
        temp++;
    }
    */
    ///������forѭ��
    for(i = 1; i <= 20; i++){
        int temp = 1;
        for( j = 1; j <= i; j++){
            temp *= j;
       }
       sum += temp;
    }

    printf("1~20�Ľ׳˵��� %ld\n", sum); // 1~20�Ľ׳˵��� 268040729
    return 0;
}
