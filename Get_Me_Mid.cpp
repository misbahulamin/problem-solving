#include<bits/stdc++.h>
using namespace std;

class Node{
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

int countSize(Node *head)
{
    int count = 0;
    Node *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void printMid(Node *head)
{
    Node *temp = head;
    int size = countSize(head);
    int mid;
    if(size%2==0)
    {
        mid = size / 2;
        for (int i = 1; i < mid; i++)
        {
            temp = temp->next;
        }
        cout << temp->val <<" "<<temp->next->val<< endl;
    }
    else
    {
        mid = size / 2;
        for (int i = 1; i <= mid; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }
}
int main()
{

    int val;
    Node *head = NULL;
    while(true)
    {
        cin >> val;
        if(val == -1)
            break;
        insert_at_tail(head, val);
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    //print_linked_list(head);
    //cout << endl;
    //cout << head->val << endl;
    //cout << countSize(head) << endl;
    printMid(head);
    return 0;
}