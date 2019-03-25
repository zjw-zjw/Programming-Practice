/*
    ��һ���ļ������ݸ��Ƶ���һ���ļ��ϣ��ڸ���ʱ�Ѵ�д��ĸ��Ϊ
    Сд��ĸ��
*/

#include <stdio.h>
#include <ctype.h>   // isupper() �ж��Ƿ�Ϊ��д��ĸ
#include <string.h>

int main()
{
    FILE *fp1, *fp2;
    char filename1[20];
    char filename2[20];
    char ch;
    printf("Input 2 filenames (copy name1 to name2):\n");
    scanf("%s %s", filename1, filename2);

    if((fp1 = fopen(filename1, "r")) == NULL){
        printf("Error opening the file1!\n");
        exit(1);
    }
    if((fp2 = fopen(filename2, "w")) == NULL){
        printf("Error opening the file2!\n");
        exit(1);
    }
    // copy file1 to file 2
    while(!feof(fp1)){    // feof������ļ����Ƿ�������ļ�β��
        ch = fgetc(fp1);  // ÿ����һ��fgetc()�������ļ�λ��ָ���ƶ�һ���ַ�
        if(isupper(ch)) { ch = 'a' + (ch - 'A'); }  // upper -> lower
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("The content in %s was copied to %s !\n", filename1, filename2);
    return 0;
}

/*
    -------------------------------------------------
    ���н����
    Input 2 filenames (copy name1 to name2):
    Test1.txt
    Text2.txt
    The content in Test1.txt was copied to Text2.txt !
    --------------------------------------------------
*/




