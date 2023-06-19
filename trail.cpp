#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printReverseRecursive(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printReverseRecursive(node->next);
    cout << node->val << " ";
}

void printOriginal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insertAtTail(head, val);
    }

    printReverseRecursive(head);
    cout << endl;
    printOriginal(head);

    return 0;
}
