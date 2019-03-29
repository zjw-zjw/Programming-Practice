/*
	2019��2��25��09:34:10
	���⣺��һԪ���η��� ax^2 + bx + c = 0 �ĸ���
	
	����������һ���Ե�һԪ���η��̵�������⡣Ϊ�ˣ�Ҫ���ǵ����ֿ��ܵ����������
	      ϵ��a, b, c��ȡֵ
		A:���a��b��Ϊ0����ԭ�����˻��������Ƿ����ˣ� 
		B:���a��0��b����0���򷽳��˻�Ϊһ�η��̣�ֻ��һ��������ֵΪ x = -c/b�� 
		C:���a����0����c��0���򷽳�������������ֵ�ֱ��� -b/a �� 0;
		D:���a��c����Ϊ0����������������ʽ���㣺
				x1 = [-b + sqrt(b^2 - 4ac)] / 2a
				x2 = [-b - sqrt(b^2 - 4ac)] / 2a
			��b^2 - 4ac >= 0ʱ��������ʵ��������b^2 - 4ac < 0ʱ�������������������� 
*/ 
#include <stdio.h>
#include <math.h>

int main(void) {
	//����ϵ��
	double a, b, c;
	
	//�����б�ʽ��ֵ
	double deta;
	
	//����ʵ���ͣ����ܵģ��鲿
	double re, im;
	
	printf("Input values of a, b, c\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if(a == 0.0 && b == 0.0) 
	{
		printf("The equation is degenerate.\n"); // ���a��b��Ϊ0����ԭ�����˻��������Ƿ����ˣ�
	} 
	else if(a == 0.0) 
	{
		printf("Single root:x=&f\n", -c/b); // ���a��0��b����0���򷽳��˻�Ϊһ�η��̣�ֻ��һ��������ֵΪ x = -c/b��
	} 
	else if(c == 0.0) 
	{
		printf("Two roots:x1=%f,x2=%f\n", 0.0, -b/a); // ���a����0����c��0���򷽳�������������ֵ�ֱ��� -b/a �� 0; 
	} 
	else
    {
		re = -b / (2.0 * a); // ʵ������ 
		deta = pow(b,2) - 4*a*c;
		im = sqrt(fabs(deta)) / (2.0 * a); // �������� 
		
		if(deta >= 0.0) {
			printf("Two roots: x1 = %f\tx2 = %f\n",re + im, re - im);
		} else {
			printf("Two complex roots:\n");
			printf("x1 = %f+%fi\tx2 = %f+&fi\n", re, im, re, im);
		}
	}
	
	return 0;
}
