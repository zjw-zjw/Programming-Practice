/*
    把一个文件的内容复制到另一个文件上，在复制时把大写字母改为
    小写字母。
*/

#include <stdio.h>
#include <ctype.h>   // isupper() 判断是否为大写字母
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
    while(!feof(fp1)){    // feof（检查文件流是否读到了文件尾）
        ch = fgetc(fp1);  // 每调用一次fgetc()函数，文件位置指针移动一个字符
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
    运行结果：
    Input 2 filenames (copy name1 to name2):
    Test1.txt
    Text2.txt
    The content in Test1.txt was copied to Text2.txt !
    --------------------------------------------------
*/




