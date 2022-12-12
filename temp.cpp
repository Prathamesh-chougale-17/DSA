#include <iostream>
#include <stack>
using namespace std;

typedef class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
} node;
void InorderTraverse(node *root)
{
    if (root == NULL)
        return;
    // left root right
    InorderTraverse(root->left);
    cout << root->data << "\t";
    InorderTraverse(root->right);
}

int main()
{
    node *root = new node(0);
    root->left = new node(1);
    root->right = new node(2);
    root->left->left = new node(3);
    root->left->right = new node(4);
    // root->right->right = new node(6);
    // root->right->left = new node(5);
    InorderTraverse(root);
    return 0;
}
