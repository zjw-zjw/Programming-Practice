/*
	Test6:���ļ��ܡ� 
		�򵥵ļ����㷨������ĸA�����ĸI��a���i
		��������ĵڰ˸���ĸ��������U���C��V���D���ȵȡ�
		�Ӽ���������һ�����ģ��������Ӧ�����롣 
	
	������Ӧ��ע�⵽������8����һ��ѭ���Ĳ����� 
*/ 
#include <stdio.h>

int main(void) {
	char ch;
	printf("������һ�����ģ�\n");
	
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
