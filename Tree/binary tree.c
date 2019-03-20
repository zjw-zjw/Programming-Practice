/*
    ����һ������������
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} Node;

typedef struct tree {
    Node* root;
} Tree;

// ǰ�����
void preorder(Node* node)
{
    if(node != NULL) {
        printf("%d\t", node -> data);
        preorder( node -> left);
        preorder( node -> right);
    }
}
// �������
void inorder(Node* node)
{
    if(node != NULL) {
        inorder(node -> left);
        printf("%d\t", node -> data);
        inorder(node -> right);
    }
}
// �������
void postorder(Node* node)
{
    if(node != NULL) {
        postorder(node -> left);
        postorder(node -> right);
        printf("%d\t", node -> data);
    }
}

// ��������������
void insert(Tree* tree, int value)
{
    // ��ʼ�����
    Node* node = (Node *)malloc(sizeof(Node));
    node -> data  = value;
    node -> left  = NULL;
    node -> right = NULL;

    if( tree -> root == NULL) {
        tree -> root = node;
    } else {
        // ����һ����ʱ����
        Node* temp = tree -> root;
        while( temp != NULL) {
            if( value < temp -> data) {
                if( temp -> left == NULL) {
                    temp -> left = node;
                    return ;
                } else {
                    temp = temp -> left;
                }
            } else {
                if( temp -> right == NULL) {
                    temp -> right = node;
                    return ;
                } else {
                    temp = temp -> right;
                }
            }
        }
    }
}
// �����ĸ߶�
int get_height(Node* node)
{
    if(node == NULL) {
        return 0;
    } else {
        int left_h  = get_height( node -> left);
        int right_h = get_height( node -> right);
        int max = left_h;
        if( max < right_h) {
            max = right_h;
        }
        return max + 1;
    }
}

int get_maximum(Node* node)
{
    if(node == NULL) {
        return -1;
    } else {
        int m1 = get_maximum(node -> left);
        int m2 = get_maximum(node -> right);
        int m3 = node -> data;
        int max = m1;
        if (m2 > max)  { max = m2; }
        if (m3 > max)  { max = m3; }
        return max;
    }
}

int main()
{
    int a[9] = {4, 8, 5, 9, 3, 6, 7, 1, 0};
    int i;
    Tree tree;
    tree.root = NULL;
    for(i=0; i<9; i++) {
        insert(&tree, a[i]);
    }
    // �����ĸ߶�
    int h = get_height(tree.root);
    printf("The tree's height is %d\n", h);

    // �����ֵ
    int max = get_maximum(tree.root);
    printf("The tree's maximum is %d\n", max);
    // ����������
    preorder(tree.root);
    printf("\n");
    inorder(tree.root);
    printf("\n");
    postorder(tree.root);
    printf("\n");

    return 0;
}
