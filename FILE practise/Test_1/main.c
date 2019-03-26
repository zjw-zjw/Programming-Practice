/*
    编写一个程序，它打开一个文件，并统计该文件的字符个数
    最后输出统计结果。
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt = 0;
    FILE *fp;
    char filename[20];
    printf("Input the filename: ");
    scanf("%s", filename);
    if(!(fp = fopen(filename, "r"))){
        fprintf(stderr, "Error opening the file!\n");
        exit(1);
    }

    while(!feof(fp)){
        fgetc(fp);
        cnt++;
    }
    fclose(fp);
    printf("\nThe file have %d character.\n", cnt);

    return 0;
}
