/*
    �û�������������������������֮�����е�������
    ���һ������prime()�����ж�����
*/

#include <stdio.h>


int prime(int );

int main()
{
    int n, m;
    printf("������������: \n");
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
    printf("%d �� %d ֮��������У�\n", n, m);
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
