/*
	2019��2��25��15:01:27
	���⣺����һ���������������������
	����������12345�����54321
	
	������
		A:��ȡ��ÿһλ�����֣��ٽ���ƴ��
		B:12345 ģ10 �͵õ� ��λ����5������12345����10�ɵõ�1234
		C:1234����ִ��B���� 
*/
#include <stdio.h>

int main(void) {
	
	int num;   
	int temp; // temp���ÿһ����ȡ���������� 
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
