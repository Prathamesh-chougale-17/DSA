#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev, *next;
};
class doublylinkedlist
{
private:
    Node *header = NULL;

public:
    void insertatbegin();
    void insertatend();
    void insertatposition();
    void deleteatbegin();
    void deleteatend();
    void deleteatposition();
    void displaylist();
};
void doublylinkedlist::insertatbegin()
{
    Node *n1;
    int n{32};
    n1 = new Node();
    cout << "Enter the data part of the first node" << endl;
    // cin >> n;
    n1->data = n;
    n1->next = header;
    n1->prev = NULL;
    if (header == NULL)
    {
        header = n1;
    }
    else
    {
        header->prev = n1;
        header = n1;
    }
}
void doublylinkedlist::insertatend()
{
    Node *n1;
    n1 = new Node();
    int n{52};
    cout << "Enter the data part of last node" << endl;
    // cin >> n;
    n1->data = n;
    n1->next = NULL;
    if (header == NULL)
    {
        header = n1;
        n1->prev = NULL;
    }
    else
    {
        Node *temp;
        temp = header;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n1;
        n1->prev = temp;
    }
}

void doublylinkedlist::insertatposition()
{
    int p{1};
    int count = 0;
    cout << "Enter the position where the new element is to be inserted" << endl;
    // cin >> p;

    Node *temp;
    temp = header;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (count > p)
    {
        cout << "You can't insert the element" << endl;
    }
    else if (p == 0)
    {
        insertatbegin();
    }
    else
    {
        Node *n1;
        Node *store_new;
        n1 = new Node();
        int n{42};
        cout << "Enter the data part to be added" << endl;
        // cin >> n;
        n1->data = n;
        Node *temp = header;
        for (int i = 0; i < p - 2; i++)
        {
            temp = temp->next;
        }
        store_new = temp->next;
        temp->next = n1;
        n1->prev = temp;
        n1->next = store_new;
    }
}
void doublylinkedlist::displaylist()
{
    Node *temp;
    temp = header;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}

int main()
{
    doublylinkedlist d;
    int ch;
    do
    {
        cout << "Enter 1 to insert at beginning" << endl;
        cout << "Enter 2 to insert at end" << endl;
        cout << "Enter 3 to insert at position" << endl;
        cout << "Enter 4 to display list" << endl;
        cout << "Enter 5 to delete at beginning" << endl;
        cout << "Enter 6 to delete  at end" << endl;
        cout << "Enter 7 to delete  at position" << endl;

        cout << "Enter 8 to exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            d.insertatbegin();
            break;
        case 2:
            d.insertatend();
            break;
        case 3:
            d.insertatposition();
            break;
        case 4:
            d.displaylist();
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        case 8:
            return 0;
        }
    } while (1);
    return 0;
}