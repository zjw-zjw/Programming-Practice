/*
	2019年2月25日15:01:27
	问题：输入一个整数，按反方向输出它
	举例：输入12345，输出54321
	
	分析：
		A:提取出每一位的数字，再进行拼接
		B:12345 模10 就得到 个位数字5，而且12345除以10可得到1234
		C:1234继续执行B步骤 
*/
#include <stdio.h>

int main(void) {
	
	int num;   
	int temp; // temp存放每一次提取出来的数字 
	printf("Type in a integer:\n");
	scanf("%d", &num);
	
	while(num != 0){
		temp = num % 10;
		num /= 10;
		printf("%d", temp); 
	} 
	printf("\n"); 
	
	return 0;
}
