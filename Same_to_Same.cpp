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

void second_insert_at_tail(Node *&head2, int val)
{
    Node *newNode = new Node(val);
    if (head2 == NULL)
    {
        head2 = newNode;
        return;
    }
    Node *temp = head2;
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

int countSize(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

bool isEqual(Node *head, Node *head2)
{
    Node *node1 = head;
    Node *node2 = head2;

    while (node1 != NULL && node2 != NULL)
    {
        if (node1->val != node2->val)
        {
            return false;
        }
        node1 = node1->next;
        node2 = node2->next;
    }
    if (node1 != NULL || node2 != NULL)
    {
        return false;
    }

    return true;
}

int main()
{
    int val, val2;
    Node *head = NULL;
    Node *head2 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }

    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        second_insert_at_tail(head2, val2);
    }
    // int firstS = countSize(head);
    // int secondS = countSize(head2);
    // int flag = 0;
    // if (firstS == secondS)
    // {
    //     for (int i = 1; i <= firstS; i++)
    //     {
    //         if (head->val == head2->val)
    //         {
    //             flag = 1;
    //         }
    //         else
    //             flag = 0;
    //         head = head->next;
    //         head2 = head2->next;
    //     }
    //     if (flag == 1)
    //         cout << "YES" << endl;
    //     else
    //         cout << "NO" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    if (isEqual(head, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}