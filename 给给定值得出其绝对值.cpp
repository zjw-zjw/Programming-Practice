/*
	2019��2��25��09:21:46
	���⣺�Ӽ���¼��һ����������ʾ���ľ���ֵ 
*/ 
#include <stdio.h>

int main(void) {
	int num;
	printf("Type in your number:\n");
	scanf("%d", &num);
	
	if(num < 0) {
		num = -num;
	}
	printf("The absolute value is %d\n", num);
	
	return 0;
}
