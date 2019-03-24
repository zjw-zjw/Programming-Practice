/*
    采用交互式建立一个链表，每个结点包括姓名、学号、性别、年龄。
    输入一个年龄值，从链表中删除所有年龄等于该值的结点。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    char name[20];
    long num;
    int age;
    char sex;
    struct student* next;
} Student;

void print(Student* head);
struct student* create();
struct student* moveOut(Student* head);

int main()
{
    Student *std, *p;
    std = create();
    printf("Initial link:\n");
    print(std);
    p = moveOut(std);
    printf("\nAfter delete:\n");
    print(p);

    return 0;
}

struct student* create()
{
    Student *head, *p, *q;
    char name[20];

    printf("Input student's Name, Num, Sex, Age(\" *** \" for end). \n");
    p = (Student*)malloc(sizeof(Student));
    head = p;
    q = p;
    p->next = NULL;
    scanf("%s %ld %c %d", p->name, &p->num, &p->sex, &p->age);

    // 尾插法建立单链表
    while(1) {
        scanf("%s", name);
        if(strcmp(name, "***") == 0) {
            break;
        }
        p = (Student*)malloc(sizeof(Student)); // 创建新结点
        strcpy(p->name, name);
        scanf("%ld %c %d", &p->num, &p->sex, &p->age);
        q->next = p;
        q = p;  // q每次都在链表最尾端
        p->next = NULL;
    }
    return head;
}

// 输出链表
void print(Student* head)
{
    Student *work;
    work = head;
    int i = 1;
    while(work != NULL) {
        printf("(%d) %s   %ld   %c   %d\n", i++, work->name, work->num, work->sex, work->age);
        work = work->next;
    }
}

//  删除与给定年龄相等的结点
struct student* moveOut(Student* head)
{
    int age;
    Student *p, *work, *current;
    printf("Please input the age you want to delete:\n");
    scanf("%d", &age);

    p = head;
    while(p) {
        while((p->age != age) && p != NULL) {
            p = p->next;
        }
        if(p) {
            if(p == head) {         // 如果p是首结点
                current = head;
                head = head->next;
                free(current);
                p = head;
            } else {                // 如果p不是首结点，则让work指针走到p的前驱
                work = head;
                while(work->next != p) {
                    work = work->next;
                }
                current = p;
                work->next = p->next;
                free(current);
                p = work->next;
            }
        }
    }

    return head;
}



