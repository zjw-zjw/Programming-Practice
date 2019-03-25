/*
    盒子中有红、黄、绿、黑、白、蓝6种颜色的小球若干。每次从盒中取出
    3个小球，要求取出球的颜色各不相同。问有多少种可能的取法，输出每种
    组合的3种颜色。
*/

#include <stdio.h>

enum color {red, yellow, green, black, white, blue};

int main()
{
    enum color i, j, k, select;
    int cnt, loop;
    cnt = 0;

    for(i=red; i<=blue; i++){
        for(j=red; j<=blue; j++){
            if( i != j) {
                for(k=red; k<=blue; k++){
                    if((k!=i) && (k!=j)){
                        cnt++;
                        printf("%5d", cnt);
                        for(loop=1; loop<=3; loop++){
                            switch(loop){
                                case 1: select = i;  break;
                                case 2: select = j;  break;
                                case 3: select = k;  break;
                                default: break;
                            }
                            switch(select){
                                case red:   printf("%10s", "red");   break;
                                case yellow:printf("%10s", "yellow");break;
                                case green: printf("%10s", "green"); break;
                                case black: printf("%10s", "black"); break;
                                case white: printf("%10s", "white"); break;
                                case blue : printf("%10s", "blue");  break;
                                default   : break;
                            }
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
    printf("Total = %5d\n", cnt);
    return 0;
}
