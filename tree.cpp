#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct node
{
    int data;
    node *right;
    node *left;
};
class tree
{
    node *root = NULL;

public:
    void insert(int data)
    {
        if (root == NULL)
        {
            root->data = data;
        }
        else
        {
            
        }
    }
};
int main()
{
    return 0;
}