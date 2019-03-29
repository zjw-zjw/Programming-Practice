/*
    用户键入两个整数，求两个整数之间所有的素数。
    设计一个函数prime()用来判断素数
*/

#include <stdio.h>


int prime(int );

int main()
{
    int n, m;
    printf("请输入两个数: \n");
    scanf("%d%d", &n, &m);
    int max, min;
    // change number
    if(n > m){
        max = n;
        min = m;
    }else {
        max = m;
        min = n;
    }
    printf("%d 到 %d 之间的素数有：\n", n, m);
    if(min<2){
        min = 2;
    }
    for (min; min <= max; min++){
        if(prime(min)){
            printf("%d\t", min);
        }
    }

    return 0;
}

int prime(int x)
{
    int i;
    for(i=2; i < x; i++){
        if(x%i == 0){
            return 0;
        }
    }
    if(i == x){
        return 1;
    }
}
