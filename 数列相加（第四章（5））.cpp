/*
	���⣺����1/1 * 2 + 1/2 * 3 + 1/3 * 4 + ... + 1/n * (n+1) , n = 20��
	
	������ ��һ��forѭ������
		ע�⣺ͳ�Ʊ���sumҪ����Ϊ double�ͻ���float�� 
*/ 
#include <stdio.h>

int main (void) {
	
	double n;
	double sum = 0;
	
	for(n=1; n <= 20; n++){
		sum = sum + 1/n * (n+1);
	}
	
	printf("���Ϊ��%lf\n", sum); // float�͵Ľ��Ϊ��23.597742 
								  // double�͵Ľ��Ϊ��23.597740 
	return 0;
}
