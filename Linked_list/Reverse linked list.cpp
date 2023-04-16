#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertAtTail(node *&head, int value)
{
    node *tail = new node(value);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = tail;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "NULL";
        }
    }
}

void ReverseList(node*&head)
{
    node*curr =head;
    node*after;
    node*prev =NULL;
    while(curr!=NULL)
    {
        after = curr->next; 
        curr->next = prev;
        prev =curr;
        curr =after;
    }
    head = prev;
}



int main()
{
    node*head = new node(0);
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    display(head);
    cout<<endl;
    ReverseList(head);
    display(head);
    return 0;
}