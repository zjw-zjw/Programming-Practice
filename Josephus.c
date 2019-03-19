/*
    “约瑟夫(Josephus)问题”：
        N个小孩围成一个圈，并依次逐个编号。老师指定从第W个小孩开始报数，
        报数是s的小孩出列。然后从下一个小孩开始重新报数，并按照上述方法重复下去，
        直到所有的孩子都出列。试输出小孩出列的次序。
*/

#include <stdio.h>
#include <stdlib.h>
#define  N  100

struct child {
    int ino;
    int next;
}link[N+1];

int main()
{
    int n_child, which, come_out;
    int i;
    int count;
    printf("Input date: n_child=? which=? come_out=?\n");
    scanf("%d %d %d", &n_child, &which, &come_out);
    if(n_child > N){
        printf("The date is Too Much!\n");
    }else{
        // 给小孩编号
        n_child += 1;
        for(i=1; i<=n_child; i++){
            if(i == n_child){
                link[i].next = 1; // 最后一个小孩的下一个是1，形成一个环
            }else{
                link[i].ino = i;
                link[i].next = i+1;
            }
        }
    }
    printf("The order of children came out:\n");

    int k = which; // 从k小孩开始
    count = 0;  // 计数
    while(count != n_child - 1){
        i = 0;
        // 找到从which开始的第come_out位小孩
        while(1){
            if(link[k].ino != 0){
                i++;
            }

            if(i >= come_out){
                break;
            }
            k = link[k].next;
        }
        count++;
        printf("%4d", link[k].ino);
        link[k].ino = 0;
        if(count % 10 == 0){
            printf("\n");
        }
    }
    printf("Bye Bye!\n");
    return 0;
}
