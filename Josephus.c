/*
    ��Լɪ��(Josephus)���⡱��
        N��С��Χ��һ��Ȧ�������������š���ʦָ���ӵ�W��С����ʼ������
        ������s��С�����С�Ȼ�����һ��С����ʼ���±��������������������ظ���ȥ��
        ֱ�����еĺ��Ӷ����С������С�����еĴ���
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
        // ��С�����
        n_child += 1;
        for(i=1; i<=n_child; i++){
            if(i == n_child){
                link[i].next = 1; // ���һ��С������һ����1���γ�һ����
            }else{
                link[i].ino = i;
                link[i].next = i+1;
            }
        }
    }
    printf("The order of children came out:\n");

    int k = which; // ��kС����ʼ
    count = 0;  // ����
    while(count != n_child - 1){
        i = 0;
        // �ҵ���which��ʼ�ĵ�come_outλС��
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
