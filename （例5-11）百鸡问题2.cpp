/*
	���⣺�ټ�����2
	
	Ҫ��ֻҪһ�ֽ������ 
*/
#include <stdio.h>

int main(void) {
	int x, y, z;
	
	for(x=0; x<=20; x++) {
		for(y=0; y<34; y++) {
			z = 100 - x - y;
			if( ((5*x + 3*y + z/3)==100))
				break;
		}
		
		if(x && y && z) {
			printf("cock = %d\then = %d\tchicken = %d\n", x, y, z);
			printf("This is one solutiion.\n");
			break;
		}
	}
	return 0;
}
