/*
    ���ã�
        ��һ�������������У�����ԭ������ͷ�����µ���β����ԭ��β������ͷ��
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
    // β�巨����������
    while(1) {
        scanf("%d", &temp);
        if(temp == -1) {
            break;
        }
        p = (Node*)malloc(sizeof(Node)); // �����½��
        p->val = temp;
        q->next = p;
        q = p;  // qÿ�ζ���������β��
        p->next = NULL;
    }
    return head;

}

// �������
void print(Node* head)
{
    Node *work;
    work = head;
    while(work != NULL) {
        printf("%d\t", work->val);
        work = work->next;
    }
}

// ԭ����������ÿ�δӺ�һ������ó����嵽�׽����(ͷ�巨)
struct node* reverse( Node* head1)
{
    Node *p1, *p2, *work;
    Node *head2;    // head2����ָ���µ���ͷ
    p1 = head1;
    p2 = head2 = NULL;      // p2�䵱���׽�������

    while(p1){
        head1 = p1->next;   // head1������һ��
        head2 = p1;         // p1���µ��׽�㣬����head2ָ����
        p1->next = p2;      // �µ��׽�����һ�������Ǿɵ��׽��
        p2 = head2;         // p2ָ����ͷ����һ�������Ǿɵ��׽��
        p1 = head1;         // p1������һ��
    }

    return head2;
}











