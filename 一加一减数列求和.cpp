/*
	问题：计算1 - 3 + 5 - 7 + ... - 99 + 101 
	
	分析：
		A:这是一个奇数加减交替相加的例子
		B:定义一个sum变量存储结果，初始值为0 
		C:项数为奇数的时候值为正数，项数为偶数的时候，值为负数 
*/ 
#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i = 1;
	int j = 1; // j为项数 
	/*
	for(i=1; i <= 101; i = -(i+2))
	{
		sum = sum + i;	
	} 
	*/ 
	while (i <= 101) {
		sum = sum + i;
		
		if((j++)%2 == 0){
			i = -(i+2); 
		}else{
			i = -i + 2;
		}
	}
	
	printf("结果为 = %d\n", sum);
	 
	return 0;
}
