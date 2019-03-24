/*
    逆置：
        将一个链表按逆序排列，即将原来的链头当作新的链尾，而原链尾当作链头。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node* next;
} Node;

struct node* create();
struct node* reverse( Node* head1);
void print(Node* head);

int main()
{
    Node *head;
    printf("create a link list:\n");
    head = create();
    printf("Initial link list is :\n");
    print(head);

    head = reverse(head);
    printf("\nAfter reverse :\n");
    print(head);
    return 0;
}

struct node* create()
{
    Node *head, *p, *q;
    int temp;
    p = (Node*)malloc(sizeof(Node));
    head = p;
    q = p;
    p->next = NULL;
    printf("Input node's Value(-1 for end). \n");
    scanf("%d", &p->val);
    // 尾插法建立单链表
    while(1) {
        scanf("%d", &temp);
        if(temp == -1) {
            break;
        }
        p = (Node*)malloc(sizeof(Node)); // 创建新结点
        p->val = temp;
        q->next = p;
        q = p;  // q每次都在链表最尾端
        p->next = NULL;
    }
    return head;

}

// 输出链表
void print(Node* head)
{
    Node *work;
    work = head;
    while(work != NULL) {
        printf("%d\t", work->val);
        work = work->next;
    }
}

// 原地逆置链表，每次从后一个结点拿出来插到首结点上(头插法)
struct node* reverse( Node* head1)
{
    Node *p1, *p2, *work;
    Node *head2;    // head2用来指向新的链头
    p1 = head1;
    p2 = head2 = NULL;      // p2充当旧首结点的作用

    while(p1){
        head1 = p1->next;   // head1往后走一步
        head2 = p1;         // p1是新的首结点，所以head2指向它
        p1->next = p2;      // 新的首结点的下一个结点便是旧的首结点
        p2 = head2;         // p2指向链头，下一轮它既是旧的首结点
        p1 = head1;         // p1往后走一步
    }

    return head2;
}











