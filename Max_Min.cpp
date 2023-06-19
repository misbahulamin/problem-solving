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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_max_min(Node *head)
{
    Node *max = head;
    Node *min = head;
    Node *temp = head;
    while (temp != NULL)
    {
        if (max->val < temp->val)
        {
            max = temp;
        }
        if (min->val > temp->val)
        {
            min = temp;
        }
        temp = temp->next;
    }
    cout << max->val <<" "<<min->val<< endl;
}

int main()
{

    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    //print_linked_list(head);
    print_max_min(head);

    return 0;
}