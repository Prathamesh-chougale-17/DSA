#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *right;
    node *left;
    int data;
    node(int var)
    {
        left = NULL;
        right = NULL;
        data = var;
    }
};

void inversion(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inversion(root->left);
    cout<<root->data<<"->";
    inversion(root->right);
}

int main()
{
    node *root = new node(3);
    root->left = new node(5);
    root->right = new node(7);
    root->left->right = new node(6);
    root->left->left = new node(2);
    inversion(root);
}