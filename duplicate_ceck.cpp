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

void duplicateCheck(Node *head)
{
    Node *temp = head;
    int flag = 0;
    while(temp != NULL)
    {
        Node *temp2 = temp->next;
        while(temp2!=NULL)
        {
            cout << temp->val << "  " << temp2->next->val << endl;
            if(temp->val==temp2->next->val)
            {
                flag = 1;
            }
            temp2 = temp2->next;
        }
        cout<<"HI"<<endl;
        temp = temp->next;
    }
    if(flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
    duplicateCheck(head);
    return 0;
}