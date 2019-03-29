/*
	Test6:电文加密。 
		简单的加密算法：将字母A变成字母I，a变成i
		即变成其后的第八个字母。这样，U变成C，V变成D，等等。
		从键盘上输入一串电文，输出其相应的密码。 
	
	分析：应该注意到当加上8后有一个循环的操作。 
*/ 
#include <stdio.h>

int main(void) {
	char ch;
	printf("请输入一串电文：\n");
	
	while((ch = getchar()) != '\n') {
		
		if(ch <= 'Z' && ch >= 'A') {
			ch = (ch - 'A' + 8) % 26 + 'A';
			printf("%c", ch);
		}else if(ch <= 'z' && ch >= 'a'){
			ch = (ch - 'a' + 8) % 26 + 'a';
			printf("%c", ch);
		}	
	} 
	printf("\n");
	return 0;
} 
