/*
	���⣺����a��b��c�������֣����併�����
	
	������
		(1):��a��b�Ƚϣ���a����b����ִ��(2)����aС�ڵ���b��ִ��(3)
		(2):��a��c�Ƚϣ���a����c�����a��ִ��(4)
			�������c�������a��������b 
		(3):��b��c�Ƚϣ���b����c�����b��ִ��(5) 
			�������c�������b�������a
		(4):��c��b�Ƚϣ���c����b�����c�������b���������b�������c 
		(5):��c��a�Ƚϣ���c����a�����c�������a���������a�������c 
*/
#include <stdio.h>

//��������
void printDes(int , int , int ); 

//������
int main(void)
{
	int a, b, c;
	printf("������������\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c); 
	
	//���ú���
	printDes(a,b,c); 
	
	return 0;
}

//������
void printDes(int a, int b, int c) //a = 2, b = 4, c = 3 
{
	if (a > b) {
		if (a > c) {
			printf("%d\n",a);
			if(c > b){
				printf("%d\n",c);
				printf("%d\n",b);
			}else{
				printf("%d\n",b);
				printf("%d\n",c);
			}
		}
	}else {
		if(b > c){
			printf("%d\n",b);
			if(c > a){
				printf("%d\n",c);
				printf("%d\n",a);
			}else {
				printf("%d\n",a);
				printf("%d\n",c);
			}
		}
	}
	
} 
