/*
	���⣺���� 1�� 1�� 2�� 3�� 5�� 8�� 13�� 21... ��������쳲���������
			NO 1   2   3   4   5   6   7    8 ...���� 
			����ƹ�ʽΪ��
						Un = Un-1 + Un-2
					����nΪ����(n>=3),���ӵ����ʼ��ÿһ�����ǰ������֮�͡� 
*/ 
#include <stdio.h>

int main(void) {
	int a, b;
	int i, c, n;
	
	for( ; ;) {
		
		printf("n=?***����0�˳�.\n");
		scanf("%d", &n);
		
		if(n == 0) break;
		if(n > 23) {
			printf("the value is too big!\n");
			break;
		}
		
		c = n;
		if(c%2 == 0)  --c; // ��֤������nΪ2ʱ������ִ���ڲ��forѭ������Ϊ��ǰ���ֵ�Ǹ����ģ�����1�� 
		
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
