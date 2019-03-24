/*
    ������������a��b������а���������ѧ�ţ�������a��ɾ��������b
    ������ͬѧ�ŵ���Щ��㡣


    ������
        A:�������� create()
        B:ɾ����ͬ��� del_same()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    char name[20];
    long num;
    struct student* next;
} Student;

/* �������� */
struct student* create();
struct student* del_same(Student* head1, Student* head2);
void print(Student* head);

int main()
{
    Student *head1, *head2, *headn;

    printf("Create list A:\n");
    head1 = create();
    print(head1);
    printf("Create list B:\n");
    head2 = create();
    print(head2);

    printf("After delete :\n");
    headn = del_same(head1, head2);
    print(headn);

    return 0;
}

struct student* create()
{
    Student *head, *p, *q;
    char name[20];

    printf("Input student's Name and num (\" *** \" for end). \n");
    p = (Student*)malloc(sizeof(Student));
    head = p;
    q = p;
    p->next = NULL;
    scanf("%s%ld", p->name, &p->num);

    // β�巨����������
    while(1) {
        scanf("%s", name);
        if(strcmp(name, "***") == 0) {
            break;
        }
        p = (Student*)malloc(sizeof(Student)); // �����½��
        strcpy(p->name, name);
        scanf("%ld", &p->num);
        q->next = p;
        q = p;
        p->next = NULL;
    }
    return head;
}

void print(Student* head)
{
    Student *work;
    work = head;
    int i = 1;
    while(work != NULL) {
        printf("(%d) %s   %ld\n", i++, work->name, work->num);
        work = work->next;
    }
}

struct student* del_same(Student* head1, Student* head2)
{
    Student *p1, *p2, *work;
    p1 = head1;
    p2 = head2;
    work = head1;

    while(p1) {
        while(p2) {
            if(p1->num == p2->num) {
                if(p1 == head1) {
                    head1 = p1->next;  // ���p1��ͷ���
                }else {
                    work->next = p1->next;      // ���p1����ͷ���
                }
                free(p1);
                p1 = work->next;
                p2 = head2;
            }
            else {
                p2 = p2->next;
            }
        }
        p2 = head2;
        work = p1;
        p1 = p1->next;
    }

    return head1;
}









