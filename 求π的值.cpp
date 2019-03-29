/*
	���⣺���òο�����1 - 1/3 + 1/5 - 1/7 + ... = ��/ 4 ��������еĽ���ֵ��
		  ����Ȼ�����Ҫ��PI�ľ���Խ�ߣ�����������Խ�ࡣ���ǿ���ָ��һ������Ҫ����10^-7.
		  �����һ��ľ���ֵС��10^-7ʱ������Ϊ�ﵽ��ֵ�ˡ� 
*/
#include <stdio.h>
#include <math.h>

int main(void) {
	//�������
	double sign; //ÿһ��ķ��� 
	double n;  // ��ĸ 
	double temp; // ÿһ���ֵ 
	double Pi;
	
	//����ֵ
	sign = 1.0;
	n = 1.0;
	temp = 1.0;
	Pi = 0;
	
	while(fabs(temp) >= 1e-7) {
		Pi += temp;
		sign = -sign;
		n += 2;
		temp = sign/n;
	} 
	Pi *= 4;
	
	printf("PI = %f\n", Pi);
	
	return 0;
}
