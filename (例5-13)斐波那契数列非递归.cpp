/*
	问题：数列 1， 1， 2， 3， 5， 8， 13， 21... 是著名的斐波那契数列
			NO 1   2   3   4   5   6   7    8 ...项数 
			其递推公式为：
						Un = Un-1 + Un-2
					其中n为项数(n>=3),即从第三项开始，每一项都是它前面两项之和。 
*/ 
#include <stdio.h>

int main(void) {
	int a, b;
	int i, c, n;
	
	for( ; ;) {
		
		printf("n=?***输入0退出.\n");
		scanf("%d", &n);
		
		if(n == 0) break;
		if(n > 23) {
			printf("the value is too big!\n");
			break;
		}
		
		c = n;
		if(c%2 == 0)  --c; // 保证在输入n为2时，不会执行内层的for循环。因为最前面的值是给定的，都是1。 
		
		a = 1;
		b = 1;
		for(i=1; i <=c/2; i++) {
			a += b;
			b += a;
		}
		printf("NO.%d is\t", n);
		if(n%2 == 0){
			printf("%d\n", b);
		}else {
			printf("%d\n",a);
		}
	}
	return 0;
} 
