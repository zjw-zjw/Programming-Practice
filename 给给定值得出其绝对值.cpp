/*
	2019年2月25日09:21:46
	问题：从键盘录入一个数，并显示它的绝对值 
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
