/*
    问题：利用冒泡排序，对一串数字进行排序。
        从小到大。
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int temp;
    int n;
    int arr[100];
    printf("N = ?\n");
    scanf("%d", &n);
    if(n > 100){
        printf("你输入的范围过大！");
        return ;
    }
    printf("请输入 %d 个数字\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // 排序开始
    for (i = 1; i < n; i++){
        for(j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // 输出排序后的结果
    printf("排序后的结果为:\n");
    for(i = 0; i < n; i++){
        printf("%d\t", arr[i]);
        if((i+1) % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}
