/*
	���⣺���λ���ֵ������͵���1099����λ��
	
	������
		A:���λ����Ϊa��ʮλ����Ϊb����λ����Ϊc
		B:a��ȡֵ��ΧΪ1-9��b��ȡֵ��ΧΪ0-9��c��ȡֵ��ΧΪ0-9
		C:1099 = a*a*a + b*b*b + c*c*c��
		D:���Ϊ��100*a + 10*b + c�� 
*/

#include <stdio.h>

int main (void)
{
	int a;
	int b;
	int c;
	
	for(a=1; a<=9; a++)
	{
		for (b=0; b<=9; b++)
		{
			for(c=0; c<=9; c++)
			{
				if(1099 == a*a*a + b*b*b + c*c*c)
				{
					printf("%d\n", 100*a + 10*b + c);
				}
			}
		}
	}
	
	return 0;
}

