/*
    ��дһ����������һ���ļ�����ͳ�Ƹ��ļ����ַ�����
    ������ͳ�ƽ����
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
