#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
struct node *insert(struct node *node, int key)
{
    if (node == NULL)
    {
        return newNode(key);
    }
    if (node->key < key)
    {
        insert(node->right, key);
    }
    else
    {
        insert(node->left, key);
    }
    return node;
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    insert(root, 98);
    inorder(root);
    return 0;
}