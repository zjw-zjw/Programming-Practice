/*
    有n个小孩围成一圈，顺序排号。从第1个人开始报数（从1到5）
    凡报到5的人退出圈子，问最后留下来的小孩原来是第几号？

    分析：把小孩当作有个数组有n个元素，元素值代表编号。
        A:循环，从开头向后计数，每记到5，就把相应的元素置0，
            表示已经退出，并记下退出的人数，接着重新计数。
        B:第一轮报完数后，回到开头连续地向下报数。
        C:当退出的人数等于小孩总数的时候，输出该小孩的编号。
*/

#include <stdio.h>
#define  N 10

int main()
{
    int i, k = 0;
    int cnt = 0;
    int child[N];
    int *p = child;
    // 给小孩数组初始化编号
    for(i=1; p<child+N; i++){
        *p = i;
        p++;
    }
    p = child;
    // 开始报数
    for( ; ;){
        for(i=0; i<N; i++){
            if( *(p+i) != 0 ){
                k++;
                if(k == 5){
                    cnt++;
                    *(p+i) = 0;
                    k = 0;
                    if(cnt == N) { goto end;}
                }
            }
        }
    }

    end: printf("The last child's number is %d\n", i+1);  // 这里i+1后是小孩的实际编号

    return 0;
}
