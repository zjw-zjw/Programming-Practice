/*
    建立一个二叉搜索树
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

// 前序遍历
void preorder(Node* node)
{
    if(node != NULL) {
        printf("%d\t", node -> data);
        preorder( node -> left);
        preorder( node -> right);
    }
}
// 中序遍历
void inorder(Node* node)
{
    if(node != NULL) {
        inorder(node -> left);
        printf("%d\t", node -> data);
        inorder(node -> right);
    }
}
// 后序遍历
void postorder(Node* node)
{
    if(node != NULL) {
        postorder(node -> left);
        postorder(node -> right);
        printf("%d\t", node -> data);
    }
}

// 构建二叉搜索树
void insert(Tree* tree, int value)
{
    // 初始化结点
    Node* node = (Node *)malloc(sizeof(Node));
    node -> data  = value;
    node -> left  = NULL;
    node -> right = NULL;

    if( tree -> root == NULL) {
        tree -> root = node;
    } else {
        // 建立一个临时变量
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
// 求数的高度
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
    // 求树的高度
    int h = get_height(tree.root);
    printf("The tree's height is %d\n", h);

    // 求最大值
    int max = get_maximum(tree.root);
    printf("The tree's maximum is %d\n", max);
    // 遍历二叉树
    preorder(tree.root);
    printf("\n");
    inorder(tree.root);
    printf("\n");
    postorder(tree.root);
    printf("\n");

    return 0;
}
