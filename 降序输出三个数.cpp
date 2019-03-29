/*
	问题：输入a、b、c三个数字，将其降序输出
	
	分析：
		(1):将a与b比较，若a大于b，则执行(2)，若a小于等于b，执行(3)
		(2):将a与c比较，若a大于c，输出a，执行(4)
			否则，输出c，再输出a，最后输出b 
		(3):将b与c比较，若b大于c，输出b，执行(5) 
			否则，输出c，再输出b，再输出a
		(4):将c与b比较，若c大于b，输出c，再输出b，否则输出b，再输出c 
		(5):将c与a比较，若c大于a，输出c，再输出a，否则输出a，再输出c 
*/
#include <stdio.h>

//函数声明
void printDes(int , int , int ); 

//主函数
int main(void)
{
	int a, b, c;
	printf("请输入三个数\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c); 
	
	//调用函数
	printDes(a,b,c); 
	
	return 0;
}

//降序函数
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
